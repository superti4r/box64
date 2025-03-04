/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedlibcTYPES_H_
#define __wrappedlibcTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFi_t)(int32_t);
typedef void (*vFp_t)(void*);
typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFi_t)(int32_t);
typedef int32_t (*iFp_t)(void*);
typedef uint8_t (*CFp_t)(void*);
typedef uint32_t (*uFp_t)(void*);
typedef uint64_t (*UFp_t)(void*);
typedef intptr_t (*lFv_t)(void);
typedef intptr_t (*lFi_t)(int32_t);
typedef uintptr_t (*LFL_t)(uintptr_t);
typedef void* (*pFL_t)(uintptr_t);
typedef void* (*pFp_t)(void*);
typedef void (*vFpi_t)(void*, int32_t);
typedef void (*vFpu_t)(void*, uint32_t);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFpV_t)(void*, ...);
typedef void (*vFpA_t)(void*, va_list);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFup_t)(uint32_t, void*);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpL_t)(void*, uintptr_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFpV_t)(void*, ...);
typedef int32_t (*iFpA_t)(void*, va_list);
typedef int32_t (*iFSp_t)(void*, void*);
typedef void* (*pFip_t)(int32_t, void*);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpp_t)(void*, void*);
typedef void* (*SFpp_t)(void*, void*);
typedef void (*vFipV_t)(int32_t, void*, ...);
typedef void (*vFipA_t)(int32_t, void*, va_list);
typedef void (*vFpii_t)(void*, int32_t, int32_t);
typedef void (*vFpup_t)(void*, uint32_t, void*);
typedef void (*vFppL_t)(void*, void*, uintptr_t);
typedef int32_t (*iFiip_t)(int32_t, int32_t, void*);
typedef int32_t (*iFiiN_t)(int32_t, int32_t, ...);
typedef int32_t (*iFipp_t)(int32_t, void*, void*);
typedef int32_t (*iFipV_t)(int32_t, void*, ...);
typedef int32_t (*iFipA_t)(int32_t, void*, va_list);
typedef int32_t (*iFpLi_t)(void*, uintptr_t, int32_t);
typedef int32_t (*iFppi_t)(void*, void*, int32_t);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFppV_t)(void*, void*, ...);
typedef int32_t (*iFppA_t)(void*, void*, va_list);
typedef int32_t (*iFpON_t)(void*, int32_t, ...);
typedef int32_t (*iFSpV_t)(void*, void*, ...);
typedef int32_t (*iFSpA_t)(void*, void*, va_list);
typedef intptr_t (*lFipV_t)(int32_t, void*, ...);
typedef intptr_t (*lFppL_t)(void*, void*, uintptr_t);
typedef uintptr_t (*LFppL_t)(void*, void*, uintptr_t);
typedef void* (*pFpip_t)(void*, int32_t, void*);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef void* (*pFppV_t)(void*, void*, ...);
typedef void (*vFiipV_t)(int32_t, int32_t, void*, ...);
typedef void (*vFiipA_t)(int32_t, int32_t, void*, va_list);
typedef void (*vFpLLp_t)(void*, uintptr_t, uintptr_t, void*);
typedef void (*vFppiV_t)(void*, void*, int32_t, ...);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFiiip_t)(int32_t, int32_t, int32_t, void*);
typedef int32_t (*iFiiiN_t)(int32_t, int32_t, int32_t, ...);
typedef int32_t (*iFiipV_t)(int32_t, int32_t, void*, ...);
typedef int32_t (*iFiipA_t)(int32_t, int32_t, void*, va_list);
typedef int32_t (*iFipii_t)(int32_t, void*, int32_t, int32_t);
typedef int32_t (*iFipup_t)(int32_t, void*, uint32_t, void*);
typedef int32_t (*iFippi_t)(int32_t, void*, void*, int32_t);
typedef int32_t (*iFpipp_t)(void*, int32_t, void*, void*);
typedef int32_t (*iFpipV_t)(void*, int32_t, void*, ...);
typedef int32_t (*iFpipA_t)(void*, int32_t, void*, va_list);
typedef int32_t (*iFpLpV_t)(void*, uintptr_t, void*, ...);
typedef int32_t (*iFpLpA_t)(void*, uintptr_t, void*, va_list);
typedef int32_t (*iFppii_t)(void*, void*, int32_t, int32_t);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef intptr_t (*lFippL_t)(int32_t, void*, void*, uintptr_t);
typedef intptr_t (*lFuipp_t)(uint32_t, int32_t, void*, void*);
typedef intptr_t (*lFppLL_t)(void*, void*, uintptr_t, uintptr_t);
typedef void (*vFpLLpp_t)(void*, uintptr_t, uintptr_t, void*, void*);
typedef int32_t (*iFiipup_t)(int32_t, int32_t, void*, uint32_t, void*);
typedef int32_t (*iFiippi_t)(int32_t, int32_t, void*, void*, int32_t);
typedef int32_t (*iFiLLLL_t)(int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
typedef int32_t (*iFipiip_t)(int32_t, void*, int32_t, int32_t, void*);
typedef int32_t (*iFipiup_t)(int32_t, void*, int32_t, uint32_t, void*);
typedef int32_t (*iFipipp_t)(int32_t, void*, int32_t, void*, void*);
typedef int32_t (*iFipppp_t)(int32_t, void*, void*, void*, void*);
typedef int32_t (*iFpiipp_t)(void*, int32_t, int32_t, void*, void*);
typedef int32_t (*iFpilpV_t)(void*, int32_t, intptr_t, void*, ...);
typedef int32_t (*iFpuppp_t)(void*, uint32_t, void*, void*, void*);
typedef void* (*pFpLLiN_t)(void*, uintptr_t, uintptr_t, int32_t, ...);
typedef void* (*pFppLLp_t)(void*, void*, uintptr_t, uintptr_t, void*);
typedef void* (*pFpppLp_t)(void*, void*, void*, uintptr_t, void*);
typedef void (*vFiipupV_t)(int32_t, int32_t, void*, uint32_t, void*, ...);
typedef int32_t (*iFpipppL_t)(void*, int32_t, void*, void*, void*, uintptr_t);
typedef int32_t (*iFpLiLpp_t)(void*, uintptr_t, int32_t, uintptr_t, void*, void*);
typedef int32_t (*iFpLiLpV_t)(void*, uintptr_t, int32_t, uintptr_t, void*, ...);
typedef int32_t (*iFpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef void* (*pFpLiiiI_t)(void*, uintptr_t, int32_t, int32_t, int32_t, int64_t);
typedef void* (*pFpLiiil_t)(void*, uintptr_t, int32_t, int32_t, int32_t, intptr_t);
typedef int32_t (*iFpippppp_t)(void*, int32_t, void*, void*, void*, void*, void*);
typedef int32_t (*iFppipppp_t)(void*, void*, int32_t, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(_Jv_RegisterClasses, vFv_t) \
	GO(__cxa_pure_virtual, vFv_t) \
	GO(__stack_chk_fail, vFv_t) \
	GO(exit, vFi_t) \
	GO(_ITM_deregisterTMCloneTable, vFp_t) \
	GO(_ZGTtdlPv, vFp_t) \
	GO(__cxa_finalize, vFp_t) \
	GO(fork, iFv_t) \
	GO(vfork, iFv_t) \
	GO(iopl, iFi_t) \
	GO(__libc_dlclose, iFp_t) \
	GO(_setjmp, iFp_t) \
	GO(atexit, iFp_t) \
	GO(getcontext, iFp_t) \
	GO(register_printf_type, iFp_t) \
	GO(setcontext, iFp_t) \
	GO(setjmp, iFp_t) \
	GO(stime, iFp_t) \
	GO(uname, iFp_t) \
	GO(_ITM_RU1, CFp_t) \
	GO(_ITM_RU4, uFp_t) \
	GO(_ITM_RU8, UFp_t) \
	GO(syscall, lFv_t) \
	GO(__sysconf, lFi_t) \
	GO(sysconf, lFi_t) \
	GO(getauxval, LFL_t) \
	GO(_ZGTtnaX, pFL_t) \
	GO(_ZGTtnam, pFL_t) \
	GO(__deregister_frame_info, pFp_t) \
	GO(mallinfo, pFp_t) \
	GO(__longjmp_chk, vFpi_t) \
	GO(_longjmp, vFpi_t) \
	GO(_obstack_newchunk, vFpi_t) \
	GO(longjmp, vFpi_t) \
	GO(siglongjmp, vFpi_t) \
	GO(_ITM_registerTMCloneTable, vFpu_t) \
	GO(__register_frame_info, vFpp_t) \
	GO(_obstack_free, vFpp_t) \
	GO(obstack_free, vFpp_t) \
	GO(tdestroy, vFpp_t) \
	GO(twalk, vFpp_t) \
	GO(warn, vFpV_t) \
	GO(warnx, vFpV_t) \
	GO(vwarn, vFpA_t) \
	GO(vwarnx, vFpA_t) \
	GO(fstat, iFip_t) \
	GO(fstat64, iFip_t) \
	GO(setrlimit, iFup_t) \
	GO(__sigsetjmp, iFpi_t) \
	GO(backtrace, iFpi_t) \
	GO(sigsetjmp, iFpi_t) \
	GO(munmap, iFpL_t) \
	GO(__vprintf_chk, iFpp_t) \
	GO(dl_iterate_phdr, iFpp_t) \
	GO(execv, iFpp_t) \
	GO(execvp, iFpp_t) \
	GO(lstat, iFpp_t) \
	GO(lstat64, iFpp_t) \
	GO(sigaltstack, iFpp_t) \
	GO(stat, iFpp_t) \
	GO(stat64, iFpp_t) \
	GO(swapcontext, iFpp_t) \
	GO(__isoc99_scanf, iFpV_t) \
	GO(execl, iFpV_t) \
	GO(execle, iFpV_t) \
	GO(execlp, iFpV_t) \
	GO(printf, iFpV_t) \
	GO(scanf, iFpV_t) \
	GO(wprintf, iFpV_t) \
	GO(wscanf, iFpV_t) \
	GO(__isoc99_vscanf, iFpA_t) \
	GO(vprintf, iFpA_t) \
	GO(vscanf, iFpA_t) \
	GO(vwprintf, iFpA_t) \
	GO(vwscanf, iFpA_t) \
	GO(_IO_file_stat, iFSp_t) \
	GO(__sysv_signal, pFip_t) \
	GO(bsd_signal, pFip_t) \
	GO(signal, pFip_t) \
	GO(sigset, pFip_t) \
	GO(sysv_signal, pFip_t) \
	GO(__libc_dlopen_mode, pFpi_t) \
	GO(backtrace_symbols, pFpi_t) \
	GO(__libc_dlsym, pFpp_t) \
	GO(__realpath_chk, pFpp_t) \
	GO(realpath, pFpp_t) \
	GO(fopen, SFpp_t) \
	GO(fopen64, SFpp_t) \
	GO(err, vFipV_t) \
	GO(errx, vFipV_t) \
	GO(syslog, vFipV_t) \
	GO(verr, vFipA_t) \
	GO(verrx, vFipA_t) \
	GO(vsyslog, vFipA_t) \
	GO(backtrace_symbols_fd, vFpii_t) \
	GO(_ITM_addUserCommitAction, vFpup_t) \
	GO(_ITM_memcpyRnWt, vFppL_t) \
	GO(_ITM_memcpyRtWn, vFppL_t) \
	GO(__fxstat, iFiip_t) \
	GO(__fxstat64, iFiip_t) \
	GO(__fcntl, iFiiN_t) \
	GO(fcntl, iFiiN_t) \
	GO(fcntl64, iFiiN_t) \
	GO(__lxstat, iFipp_t) \
	GO(__lxstat64, iFipp_t) \
	GO(__sigaction, iFipp_t) \
	GO(__xstat, iFipp_t) \
	GO(__xstat64, iFipp_t) \
	GO(getopt, iFipp_t) \
	GO(register_printf_specifier, iFipp_t) \
	GO(sigaction, iFipp_t) \
	GO(__printf_chk, iFipV_t) \
	GO(dprintf, iFipV_t) \
	GO(vdprintf, iFipA_t) \
	GO(mprotect, iFpLi_t) \
	GO(ftw, iFppi_t) \
	GO(ftw64, iFppi_t) \
	GO(__cxa_atexit, iFppp_t) \
	GO(__cxa_thread_atexit_impl, iFppp_t) \
	GO(__vfprintf_chk, iFppp_t) \
	GO(__vsscanf, iFppp_t) \
	GO(execve, iFppp_t) \
	GO(execvpe, iFppp_t) \
	GO(__asprintf, iFppV_t) \
	GO(__isoc23_sscanf, iFppV_t) \
	GO(__isoc99_fscanf, iFppV_t) \
	GO(__isoc99_sscanf, iFppV_t) \
	GO(__isoc99_swscanf, iFppV_t) \
	GO(asprintf, iFppV_t) \
	GO(sprintf, iFppV_t) \
	GO(sscanf, iFppV_t) \
	GO(swscanf, iFppV_t) \
	GO(__isoc23_vsscanf, iFppA_t) \
	GO(__isoc99_vfscanf, iFppA_t) \
	GO(__isoc99_vsscanf, iFppA_t) \
	GO(__isoc99_vswscanf, iFppA_t) \
	GO(obstack_vprintf, iFppA_t) \
	GO(vasprintf, iFppA_t) \
	GO(vsprintf, iFppA_t) \
	GO(vsscanf, iFppA_t) \
	GO(vswscanf, iFppA_t) \
	GO(__open, iFpON_t) \
	GO(open, iFpON_t) \
	GO(open64, iFpON_t) \
	GO(__isoc23_fscanf, iFSpV_t) \
	GO(fprintf, iFSpV_t) \
	GO(fscanf, iFSpV_t) \
	GO(fwprintf, iFSpV_t) \
	GO(vfprintf, iFSpA_t) \
	GO(vfscanf, iFSpA_t) \
	GO(vfwprintf, iFSpA_t) \
	GO(vfwscanf, iFSpA_t) \
	GO(__wprintf_chk, lFipV_t) \
	GO(readlink, lFppL_t) \
	GO(strlcat, LFppL_t) \
	GO(strlcpy, LFppL_t) \
	GO(fts64_open, pFpip_t) \
	GO(fts_open, pFpip_t) \
	GO(tdelete, pFppp_t) \
	GO(tfind, pFppp_t) \
	GO(tsearch, pFppp_t) \
	GO(fopencookie, pFppV_t) \
	GO(__syslog_chk, vFiipV_t) \
	GO(error, vFiipV_t) \
	GO(__vsyslog_chk, vFiipA_t) \
	GO(qsort, vFpLLp_t) \
	GO(makecontext, vFppiV_t) \
	GO(__libc_init, vFpppp_t) \
	GO(epoll_ctl, iFiiip_t) \
	GO(semctl, iFiiiN_t) \
	GO(__dprintf_chk, iFiipV_t) \
	GO(__vdprintf_chk, iFiipA_t) \
	GO(epoll_wait, iFipii_t) \
	GO(__xmknod, iFipup_t) \
	GO(fstatat, iFippi_t) \
	GO(fstatat64, iFippi_t) \
	GO(__vasprintf_chk, iFpipp_t) \
	GO(glob, iFpipp_t) \
	GO(glob64, iFpipp_t) \
	GO(__asprintf_chk, iFpipV_t) \
	GO(__fprintf_chk, iFpipV_t) \
	GO(__fwprintf_chk, iFpipV_t) \
	GO(__vfwprintf_chk, iFpipA_t) \
	GO(__snprintf, iFpLpV_t) \
	GO(snprintf, iFpLpV_t) \
	GO(swprintf, iFpLpV_t) \
	GO(__vsnprintf, iFpLpA_t) \
	GO(vsnprintf, iFpLpA_t) \
	GO(vswprintf, iFpLpA_t) \
	GO(nftw64, iFppii_t) \
	GO(__register_atfork, iFpppp_t) \
	GO(__vsprintf_chk, iFpppp_t) \
	GO(scandir, iFpppp_t) \
	GO(scandir64, iFpppp_t) \
	GO(readlinkat, lFippL_t) \
	GO(ptrace, lFuipp_t) \
	GO(__readlink_chk, lFppLL_t) \
	GO(qsort_r, vFpLLpp_t) \
	GO(__xmknodat, iFiipup_t) \
	GO(__fxstatat, iFiippi_t) \
	GO(__fxstatat64, iFiippi_t) \
	GO(prctl, iFiLLLL_t) \
	GO(epoll_pwait, iFipiip_t) \
	GO(statx, iFipiup_t) \
	GO(epoll_pwait2, iFipipp_t) \
	GO(getopt_long, iFipppp_t) \
	GO(getopt_long_only, iFipppp_t) \
	GO(scandirat, iFipppp_t) \
	GO(_obstack_begin, iFpiipp_t) \
	GO(__sprintf_chk, iFpilpV_t) \
	GO(__vswprintf_chk, iFpuppp_t) \
	GO(mremap, pFpLLiN_t) \
	GO(bsearch, pFppLLp_t) \
	GO(lfind, pFpppLp_t) \
	GO(lsearch, pFpppLp_t) \
	GO(error_at_line, vFiipupV_t) \
	GO(__sysctl, iFpipppL_t) \
	GO(sysctl, iFpipppL_t) \
	GO(__vsnprintf_chk, iFpLiLpp_t) \
	GO(__snprintf_chk, iFpLiLpV_t) \
	GO(__swprintf_chk, iFpLiLpV_t) \
	GO(posix_spawn, iFpppppp_t) \
	GO(posix_spawnp, iFpppppp_t) \
	GO(mmap64, pFpLiiiI_t) \
	GO(mmap, pFpLiiil_t) \
	GO(__libc_start_main, iFpippppp_t) \
	GO(clone, iFppipppp_t)

#endif // __wrappedlibcTYPES_H_
