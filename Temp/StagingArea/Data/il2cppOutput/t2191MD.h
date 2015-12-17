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

struct t2191;
struct t2;
struct t178;
struct t179;

#include "codegen/il2cpp-codegen.h"
#include "t193.h"
#include "t1224.h"

extern "C" void m16381_gshared (t2191 * __this, t2 * p0, t193 p1, const MethodInfo* method);
#define m16381(__this, p0, p1, method) (( void (*) (t2191 *, t2 *, t193, const MethodInfo*))m16381_gshared)(__this, p0, p1, method)
extern "C" bool m16382_gshared (t2191 * __this, t1224  p0, const MethodInfo* method);
#define m16382(__this, p0, method) (( bool (*) (t2191 *, t1224 , const MethodInfo*))m16382_gshared)(__this, p0, method)
extern "C" t2 * m16383_gshared (t2191 * __this, t1224  p0, t179 * p1, t2 * p2, const MethodInfo* method);
#define m16383(__this, p0, p1, p2, method) (( t2 * (*) (t2191 *, t1224 , t179 *, t2 *, const MethodInfo*))m16383_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16384_gshared (t2191 * __this, t2 * p0, const MethodInfo* method);
#define m16384(__this, p0, method) (( bool (*) (t2191 *, t2 *, const MethodInfo*))m16384_gshared)(__this, p0, method)
