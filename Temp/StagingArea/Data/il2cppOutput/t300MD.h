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

struct t300;
struct t2;
struct t178;
struct t179;

#include "codegen/il2cpp-codegen.h"
#include "t193.h"

extern "C" void m1708_gshared (t300 * __this, t2 * p0, t193 p1, const MethodInfo* method);
#define m1708(__this, p0, p1, method) (( void (*) (t300 *, t2 *, t193, const MethodInfo*))m1708_gshared)(__this, p0, p1, method)
extern "C" void m11698_gshared (t300 * __this, float p0, const MethodInfo* method);
#define m11698(__this, p0, method) (( void (*) (t300 *, float, const MethodInfo*))m11698_gshared)(__this, p0, method)
extern "C" t2 * m11699_gshared (t300 * __this, float p0, t179 * p1, t2 * p2, const MethodInfo* method);
#define m11699(__this, p0, p1, p2, method) (( t2 * (*) (t300 *, float, t179 *, t2 *, const MethodInfo*))m11699_gshared)(__this, p0, p1, p2, method)
extern "C" void m11700_gshared (t300 * __this, t2 * p0, const MethodInfo* method);
#define m11700(__this, p0, method) (( void (*) (t300 *, t2 *, const MethodInfo*))m11700_gshared)(__this, p0, method)
