/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibxrenderTYPES32_H_
#define __wrappedlibxrenderTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFXi_t)(void*, int32_t);
typedef void* (*pFXp_t)(void*, void*);
typedef void* (*pFXLrLiiwwwwwwwwL_i_t)(void*, uintptr_t, struct_LiiwwwwwwwwL_t*, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(XRenderFindStandardFormat, pFXi_t) \
	GO(XRenderFindVisualFormat, pFXp_t) \
	GO(XRenderFindFormat, pFXLrLiiwwwwwwwwL_i_t)

#endif // __wrappedlibxrenderTYPES32_H_
