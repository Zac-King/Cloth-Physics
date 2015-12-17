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

struct t2193;

#include "codegen/il2cpp-codegen.h"
#include "t1224.h"

extern "C" void m16389_gshared (t2193 * __this, const MethodInfo* method);
#define m16389(__this, method) (( void (*) (t2193 *, const MethodInfo*))m16389_gshared)(__this, method)
extern "C" int32_t m16390_gshared (t2193 * __this, t1224  p0, t1224  p1, const MethodInfo* method);
#define m16390(__this, p0, p1, method) (( int32_t (*) (t2193 *, t1224 , t1224 , const MethodInfo*))m16390_gshared)(__this, p0, p1, method)
