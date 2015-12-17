#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2231;

#include "codegen/il2cpp-codegen.h"
#include "t1541.h"

extern "C" void m16774_gshared (t2231 * __this, const MethodInfo* method);
#define m16774(__this, method) (( void (*) (t2231 *, const MethodInfo*))m16774_gshared)(__this, method)
extern "C" int32_t m16775_gshared (t2231 * __this, t1541  p0, t1541  p1, const MethodInfo* method);
#define m16775(__this, p0, p1, method) (( int32_t (*) (t2231 *, t1541 , t1541 , const MethodInfo*))m16775_gshared)(__this, p0, p1, method)
