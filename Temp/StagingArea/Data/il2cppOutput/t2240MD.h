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

struct t2240;

#include "codegen/il2cpp-codegen.h"
#include "t868.h"

extern "C" void m16848_gshared (t2240 * __this, const MethodInfo* method);
#define m16848(__this, method) (( void (*) (t2240 *, const MethodInfo*))m16848_gshared)(__this, method)
extern "C" int32_t m16849_gshared (t2240 * __this, t868  p0, t868  p1, const MethodInfo* method);
#define m16849(__this, p0, p1, method) (( int32_t (*) (t2240 *, t868 , t868 , const MethodInfo*))m16849_gshared)(__this, p0, p1, method)
