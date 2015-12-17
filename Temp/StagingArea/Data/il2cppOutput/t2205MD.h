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

struct t2205;
struct t2;
struct t178;
struct t179;

#include "codegen/il2cpp-codegen.h"
#include "t193.h"
#include "t1223.h"

extern "C" void m16558_gshared (t2205 * __this, t2 * p0, t193 p1, const MethodInfo* method);
#define m16558(__this, p0, p1, method) (( void (*) (t2205 *, t2 *, t193, const MethodInfo*))m16558_gshared)(__this, p0, p1, method)
extern "C" int32_t m16559_gshared (t2205 * __this, t1223  p0, t1223  p1, const MethodInfo* method);
#define m16559(__this, p0, p1, method) (( int32_t (*) (t2205 *, t1223 , t1223 , const MethodInfo*))m16559_gshared)(__this, p0, p1, method)
extern "C" t2 * m16560_gshared (t2205 * __this, t1223  p0, t1223  p1, t179 * p2, t2 * p3, const MethodInfo* method);
#define m16560(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2205 *, t1223 , t1223 , t179 *, t2 *, const MethodInfo*))m16560_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16561_gshared (t2205 * __this, t2 * p0, const MethodInfo* method);
#define m16561(__this, p0, method) (( int32_t (*) (t2205 *, t2 *, const MethodInfo*))m16561_gshared)(__this, p0, method)
