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

struct t2192;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16385_gshared (t2192 * __this, const MethodInfo* method);
#define m16385(__this, method) (( void (*) (t2192 *, const MethodInfo*))m16385_gshared)(__this, method)
extern "C" void m16386_gshared (t2 * __this , const MethodInfo* method);
#define m16386(__this , method) (( void (*) (t2 * , const MethodInfo*))m16386_gshared)(__this , method)
extern "C" int32_t m16387_gshared (t2192 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16387(__this, p0, p1, method) (( int32_t (*) (t2192 *, t2 *, t2 *, const MethodInfo*))m16387_gshared)(__this, p0, p1, method)
extern "C" t2192 * m16388_gshared (t2 * __this , const MethodInfo* method);
#define m16388(__this , method) (( t2192 * (*) (t2 * , const MethodInfo*))m16388_gshared)(__this , method)
