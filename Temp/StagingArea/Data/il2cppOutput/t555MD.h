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

struct t555;
struct t23;
struct t23_marshaled;
struct t535;
struct t318;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2877_gshared (t555 * __this, t23 * p0, t535 * p1, float p2, const MethodInfo* method);
#define m2877(__this, p0, p1, p2, method) (( void (*) (t555 *, t23 *, t535 *, float, const MethodInfo*))m2877_gshared)(__this, p0, p1, p2, method)
extern "C" void m15448_gshared (t555 * __this, t318* p0, const MethodInfo* method);
#define m15448(__this, p0, method) (( void (*) (t555 *, t318*, const MethodInfo*))m15448_gshared)(__this, p0, method)
