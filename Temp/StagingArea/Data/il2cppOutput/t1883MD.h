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

struct t1883;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m12700_gshared (t1883 * __this, const MethodInfo* method);
#define m12700(__this, method) (( void (*) (t1883 *, const MethodInfo*))m12700_gshared)(__this, method)
extern "C" void m12701_gshared (t2 * __this , const MethodInfo* method);
#define m12701(__this , method) (( void (*) (t2 * , const MethodInfo*))m12701_gshared)(__this , method)
extern "C" int32_t m12702_gshared (t1883 * __this, t2 * p0, const MethodInfo* method);
#define m12702(__this, p0, method) (( int32_t (*) (t1883 *, t2 *, const MethodInfo*))m12702_gshared)(__this, p0, method)
extern "C" bool m12703_gshared (t1883 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m12703(__this, p0, p1, method) (( bool (*) (t1883 *, t2 *, t2 *, const MethodInfo*))m12703_gshared)(__this, p0, p1, method)
extern "C" t1883 * m12704_gshared (t2 * __this , const MethodInfo* method);
#define m12704(__this , method) (( t1883 * (*) (t2 * , const MethodInfo*))m12704_gshared)(__this , method)
