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

struct t2130;
struct t2;
struct t178;
struct t179;

#include "codegen/il2cpp-codegen.h"
#include "t193.h"
#include "t2123.h"

extern "C" void m15850_gshared (t2130 * __this, t2 * p0, t193 p1, const MethodInfo* method);
#define m15850(__this, p0, p1, method) (( void (*) (t2130 *, t2 *, t193, const MethodInfo*))m15850_gshared)(__this, p0, p1, method)
extern "C" t2123  m15851_gshared (t2130 * __this, t2 * p0, bool p1, const MethodInfo* method);
#define m15851(__this, p0, p1, method) (( t2123  (*) (t2130 *, t2 *, bool, const MethodInfo*))m15851_gshared)(__this, p0, p1, method)
extern "C" t2 * m15852_gshared (t2130 * __this, t2 * p0, bool p1, t179 * p2, t2 * p3, const MethodInfo* method);
#define m15852(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2130 *, t2 *, bool, t179 *, t2 *, const MethodInfo*))m15852_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2123  m15853_gshared (t2130 * __this, t2 * p0, const MethodInfo* method);
#define m15853(__this, p0, method) (( t2123  (*) (t2130 *, t2 *, const MethodInfo*))m15853_gshared)(__this, p0, method)
