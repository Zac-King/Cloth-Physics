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

struct t2109;
struct t535;
struct t22;
struct t2;
struct t511;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15644_gshared (t2109 * __this, const MethodInfo* method);
#define m15644(__this, method) (( void (*) (t2109 *, const MethodInfo*))m15644_gshared)(__this, method)
extern "C" t535 * m15645_gshared (t2109 * __this, t22* p0, t2 * p1, const MethodInfo* method);
#define m15645(__this, p0, p1, method) (( t535 * (*) (t2109 *, t22*, t2 *, const MethodInfo*))m15645_gshared)(__this, p0, p1, method)
extern "C" t511 * m15646_gshared (t2109 * __this, t2 * p0, t535 * p1, const MethodInfo* method);
#define m15646(__this, p0, p1, method) (( t511 * (*) (t2109 *, t2 *, t535 *, const MethodInfo*))m15646_gshared)(__this, p0, p1, method)
