
#define INIT uintptr_t sav_addr = addr
#define FINI                           \
    dyn->isize = addr - sav_addr;      \
    dyn->insts[ninst].x64.addr = addr; \
    if (ninst) dyn->insts[ninst - 1].x64.size = dyn->insts[ninst].x64.addr - dyn->insts[ninst - 1].x64.addr

#define MESSAGE(A, ...) \
    do {                \
    } while (0)
#define MAYSETFLAGS() dyn->insts[ninst].x64.may_set = 1
#define READFLAGS(A)                     \
    dyn->insts[ninst].x64.use_flags = A; \
    dyn->f.dfnone = 1;                   \
    dyn->f.pending = SF_SET

#define READFLAGS_FUSION(A, s1, s2, s3, s4, s5)                                                                 \
    if (BOX64ENV(dynarec_nativeflags) && ninst > 0 && !dyn->insts[ninst - 1].nat_flags_nofusion) {                  \
        if ((A) == (X_ZF))                                                                                      \
            dyn->insts[ninst].nat_flags_fusion = 1;                                                             \
        else if (dyn->insts[ninst - 1].nat_flags_carry && ((A) == (X_CF) || (A) == (X_CF | X_ZF)))              \
            dyn->insts[ninst].nat_flags_fusion = 1;                                                             \
        else if (dyn->insts[ninst - 1].nat_flags_sign && ((A) == (X_SF | X_OF) || (A) == (X_SF | X_OF | X_ZF))) \
            dyn->insts[ninst].nat_flags_fusion = 1;                                                             \
    }                                                                                                           \
    READFLAGS(A);

#define SETFLAGS(A, B, FUSION)                                           \
    dyn->insts[ninst].x64.set_flags = A;                                 \
    dyn->insts[ninst].x64.state_flags = (B) & ~SF_DF;                    \
    dyn->f.pending = (B) & SF_SET_PENDING;                               \
    dyn->f.dfnone = ((B) & SF_SET) ? (((B) == SF_SET_NODF) ? 0 : 1) : 0; \
    dyn->insts[ninst].nat_flags_nofusion = (FUSION)

#define EMIT(A) dyn->native_size += 4
#define JUMP(A, C)                      \
    add_jump(dyn, ninst);               \
    add_next(dyn, (uintptr_t)A);        \
    SMEND();                            \
    dyn->insts[ninst].x64.jmp = A;      \
    dyn->insts[ninst].x64.jmp_cond = C; \
    dyn->insts[ninst].x64.jmp_insts = 0
#define BARRIER(A)                                 \
    if (A != BARRIER_MAYBE) {                      \
        fpu_purgecache(dyn, ninst, 0, x1, x2, x3); \
        dyn->insts[ninst].x64.barrier = A;         \
    } else                                         \
        dyn->insts[ninst].barrier_maybe = 1
#define SET_HASCALLRET() dyn->insts[ninst].x64.has_callret = 1
#define NEW_INST                                                 \
    ++dyn->size;                                                 \
    memset(&dyn->insts[ninst], 0, sizeof(instruction_native_t)); \
    dyn->insts[ninst].x64.addr = ip;                             \
    dyn->e.combined1 = dyn->e.combined2 = 0;                     \
    dyn->e.swapped = 0;                                          \
    dyn->e.barrier = 0;                                          \
    for (int i = 0; i < 16; ++i)                                 \
        dyn->e.olds[i].v = 0;                                    \
    dyn->insts[ninst].f_entry = dyn->f;                          \
    dyn->insts[ninst].vector_sew_entry = dyn->vector_sew;        \
    dyn->inst_sew = dyn->vector_sew;                             \
    dyn->inst_vlmul = VECTOR_LMUL1;                              \
    dyn->inst_vl = 0;                                            \
    if (ninst)                                                   \
        dyn->insts[ninst - 1].x64.size = dyn->insts[ninst].x64.addr - dyn->insts[ninst - 1].x64.addr;

#define INST_EPILOG                                      \
    dyn->insts[ninst].f_exit = dyn->f;                   \
    dyn->insts[ninst].e = dyn->e;                        \
    dyn->insts[ninst].vector_sew_exit = dyn->vector_sew; \
    dyn->insts[ninst].x64.has_next = (ok > 0) ? 1 : 0;
#define INST_NAME(name)
#define DEFAULT                                                                                                                                     \
    --dyn->size;                                                                                                                                    \
    *ok = -1;                                                                                                                                       \
    if (BOX64ENV(dynarec_log) >= LOG_INFO || BOX64ENV(dynarec_dump) || BOX64ENV(dynarec_missing) == 1) {                                                        \
        dynarec_log(LOG_NONE, "%p: Dynarec stopped because of %sOpcode %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X", \
            (void*)ip, rex.is32bits ? "32bits " : "",                                                                                               \
            PKip(0),                                                                                                                                \
            PKip(1), PKip(2), PKip(3),                                                                                                              \
            PKip(4), PKip(5), PKip(6),                                                                                                              \
            PKip(7), PKip(8), PKip(9),                                                                                                              \
            PKip(10), PKip(11), PKip(12),                                                                                                           \
            PKip(13), PKip(14));                                                                                                                    \
        printFunctionAddr(ip, " => ");                                                                                                              \
        dynarec_log_prefix(0, LOG_NONE, "\n");                                                                                                                \
    }

#define SET_ELEMENT_WIDTH(s1, sew, set)                    \
    do {                                                   \
        if ((sew) != VECTOR_SEWANY && (set))               \
            dyn->vector_sew = (sew);                       \
        else if (dyn->vector_sew == VECTOR_SEWNA && (set)) \
            dyn->vector_sew = VECTOR_SEW8;                 \
    } while (0)
