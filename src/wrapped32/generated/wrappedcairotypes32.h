/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedcairoTYPES32_H_
#define __wrappedcairoTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFp_t)(void*);
typedef uint32_t (*uFpppp_t)(void*, void*, void*, void*);
typedef void* (*pFppdd_t)(void*, void*, double, double);

#define SUPER() ADDED_FUNCTIONS() \
	GO(cairo_ft_scaled_font_lock_face, pFp_t) \
	GO(cairo_xcb_device_get_connection, pFp_t) \
	GO(cairo_set_user_data, uFpppp_t) \
	GO(cairo_surface_set_user_data, uFpppp_t) \
	GO(cairo_pdf_surface_create_for_stream, pFppdd_t)

#endif // __wrappedcairoTYPES32_H_
