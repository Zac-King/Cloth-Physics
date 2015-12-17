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

struct t558;
struct t23;
struct t23_marshaled;
struct t535;
struct t318;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2880_gshared (t558 * __this, t23 * p0, t535 * p1, bool p2, const MethodInfo* method);
#define m2880(__this, p0, p1, p2, method) (( void (*) (t558 *, t23 *, t535 *, bool, const MethodInfo*))m2880_gshared)(__this, p0, p1, p2, method)
extern "C" void m15455_gshared (t558 * __this, t318* p0, const MethodInfo* method);
#define m15455(__this, p0, method) (( void (*) (t558 *, t318*, const MethodInfo*))m15455_gshared)(__this, p0, method)
