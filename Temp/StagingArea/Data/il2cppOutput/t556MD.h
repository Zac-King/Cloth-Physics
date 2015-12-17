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

struct t556;
struct t23;
struct t23_marshaled;
struct t535;
struct t318;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2878_gshared (t556 * __this, t23 * p0, t535 * p1, int32_t p2, const MethodInfo* method);
#define m2878(__this, p0, p1, p2, method) (( void (*) (t556 *, t23 *, t535 *, int32_t, const MethodInfo*))m2878_gshared)(__this, p0, p1, p2, method)
extern "C" void m15449_gshared (t556 * __this, t318* p0, const MethodInfo* method);
#define m15449(__this, p0, method) (( void (*) (t556 *, t318*, const MethodInfo*))m15449_gshared)(__this, p0, method)
