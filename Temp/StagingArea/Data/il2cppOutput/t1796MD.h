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

struct t1796;
struct t2;
struct t178;
struct t179;

#include "codegen/il2cpp-codegen.h"
#include "t193.h"
#include "t1787.h"

extern "C" void m11517_gshared (t1796 * __this, t2 * p0, t193 p1, const MethodInfo* method);
#define m11517(__this, p0, p1, method) (( void (*) (t1796 *, t2 *, t193, const MethodInfo*))m11517_gshared)(__this, p0, p1, method)
extern "C" t1787  m11518_gshared (t1796 * __this, int32_t p0, t2 * p1, const MethodInfo* method);
#define m11518(__this, p0, p1, method) (( t1787  (*) (t1796 *, int32_t, t2 *, const MethodInfo*))m11518_gshared)(__this, p0, p1, method)
extern "C" t2 * m11519_gshared (t1796 * __this, int32_t p0, t2 * p1, t179 * p2, t2 * p3, const MethodInfo* method);
#define m11519(__this, p0, p1, p2, p3, method) (( t2 * (*) (t1796 *, int32_t, t2 *, t179 *, t2 *, const MethodInfo*))m11519_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1787  m11520_gshared (t1796 * __this, t2 * p0, const MethodInfo* method);
#define m11520(__this, p0, method) (( t1787  (*) (t1796 *, t2 *, const MethodInfo*))m11520_gshared)(__this, p0, method)
