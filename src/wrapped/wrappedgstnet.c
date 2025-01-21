#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"

const char* gstnetName = "libgstnet-1.0.so.0";
#define ALTNAME "libgstnet-1.0.so"

#define LIBNAME gstnet

#define PRE_INIT    \
    if(BOX64ENV(nogtk)) \
        return -1;

#include "wrappedlib_init.h"
