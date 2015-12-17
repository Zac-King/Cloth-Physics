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

struct t1979;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14127_gshared (t1979 * __this, const MethodInfo* method);
#define m14127(__this, method) (( void (*) (t1979 *, const MethodInfo*))m14127_gshared)(__this, method)
extern "C" void m14128_gshared (t2 * __this , const MethodInfo* method);
#define m14128(__this , method) (( void (*) (t2 * , const MethodInfo*))m14128_gshared)(__this , method)
extern "C" int32_t m14129_gshared (t1979 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m14129(__this, p0, p1, method) (( int32_t (*) (t1979 *, t2 *, t2 *, const MethodInfo*))m14129_gshared)(__this, p0, p1, method)
extern "C" t1979 * m14130_gshared (t2 * __this , const MethodInfo* method);
#define m14130(__this , method) (( t1979 * (*) (t2 * , const MethodInfo*))m14130_gshared)(__this , method)
