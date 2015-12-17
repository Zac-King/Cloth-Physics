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

struct t2108;
struct t535;
struct t22;
struct t2;
struct t511;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15641_gshared (t2108 * __this, const MethodInfo* method);
#define m15641(__this, method) (( void (*) (t2108 *, const MethodInfo*))m15641_gshared)(__this, method)
extern "C" t535 * m15642_gshared (t2108 * __this, t22* p0, t2 * p1, const MethodInfo* method);
#define m15642(__this, p0, p1, method) (( t535 * (*) (t2108 *, t22*, t2 *, const MethodInfo*))m15642_gshared)(__this, p0, p1, method)
extern "C" t511 * m15643_gshared (t2108 * __this, t2 * p0, t535 * p1, const MethodInfo* method);
#define m15643(__this, p0, p1, method) (( t511 * (*) (t2108 *, t2 *, t535 *, const MethodInfo*))m15643_gshared)(__this, p0, p1, method)
