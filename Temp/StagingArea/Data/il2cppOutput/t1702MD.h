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

struct t1702;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10324_gshared (t1702 * __this, const MethodInfo* method);
#define m10324(__this, method) (( void (*) (t1702 *, const MethodInfo*))m10324_gshared)(__this, method)
extern "C" void m10325_gshared (t2 * __this , const MethodInfo* method);
#define m10325(__this , method) (( void (*) (t2 * , const MethodInfo*))m10325_gshared)(__this , method)
extern "C" int32_t m10326_gshared (t1702 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m10326(__this, p0, p1, method) (( int32_t (*) (t1702 *, t2 *, t2 *, const MethodInfo*))m10326_gshared)(__this, p0, p1, method)
extern "C" t1702 * m10327_gshared (t2 * __this , const MethodInfo* method);
#define m10327(__this , method) (( t1702 * (*) (t2 * , const MethodInfo*))m10327_gshared)(__this , method)
