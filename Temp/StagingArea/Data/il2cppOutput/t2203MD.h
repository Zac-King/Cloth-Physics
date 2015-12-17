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

struct t2203;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16552_gshared (t2203 * __this, const MethodInfo* method);
#define m16552(__this, method) (( void (*) (t2203 *, const MethodInfo*))m16552_gshared)(__this, method)
extern "C" void m16553_gshared (t2 * __this , const MethodInfo* method);
#define m16553(__this , method) (( void (*) (t2 * , const MethodInfo*))m16553_gshared)(__this , method)
extern "C" int32_t m16554_gshared (t2203 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16554(__this, p0, p1, method) (( int32_t (*) (t2203 *, t2 *, t2 *, const MethodInfo*))m16554_gshared)(__this, p0, p1, method)
extern "C" t2203 * m16555_gshared (t2 * __this , const MethodInfo* method);
#define m16555(__this , method) (( t2203 * (*) (t2 * , const MethodInfo*))m16555_gshared)(__this , method)
