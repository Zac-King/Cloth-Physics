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

struct t2237;

#include "codegen/il2cpp-codegen.h"
#include "t1560.h"

extern "C" void m16804_gshared (t2237 * __this, const MethodInfo* method);
#define m16804(__this, method) (( void (*) (t2237 *, const MethodInfo*))m16804_gshared)(__this, method)
extern "C" int32_t m16805_gshared (t2237 * __this, t1560  p0, const MethodInfo* method);
#define m16805(__this, p0, method) (( int32_t (*) (t2237 *, t1560 , const MethodInfo*))m16805_gshared)(__this, p0, method)
extern "C" bool m16806_gshared (t2237 * __this, t1560  p0, t1560  p1, const MethodInfo* method);
#define m16806(__this, p0, p1, method) (( bool (*) (t2237 *, t1560 , t1560 , const MethodInfo*))m16806_gshared)(__this, p0, p1, method)
