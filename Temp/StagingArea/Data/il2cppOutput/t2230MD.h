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

struct t2230;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16770_gshared (t2230 * __this, const MethodInfo* method);
#define m16770(__this, method) (( void (*) (t2230 *, const MethodInfo*))m16770_gshared)(__this, method)
extern "C" void m16771_gshared (t2 * __this , const MethodInfo* method);
#define m16771(__this , method) (( void (*) (t2 * , const MethodInfo*))m16771_gshared)(__this , method)
extern "C" int32_t m16772_gshared (t2230 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16772(__this, p0, p1, method) (( int32_t (*) (t2230 *, t2 *, t2 *, const MethodInfo*))m16772_gshared)(__this, p0, p1, method)
extern "C" t2230 * m16773_gshared (t2 * __this , const MethodInfo* method);
#define m16773(__this , method) (( t2230 * (*) (t2 * , const MethodInfo*))m16773_gshared)(__this , method)
