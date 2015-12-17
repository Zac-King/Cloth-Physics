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

struct t1703;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10328_gshared (t1703 * __this, const MethodInfo* method);
#define m10328(__this, method) (( void (*) (t1703 *, const MethodInfo*))m10328_gshared)(__this, method)
extern "C" int32_t m10329_gshared (t1703 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m10329(__this, p0, p1, method) (( int32_t (*) (t1703 *, t2 *, t2 *, const MethodInfo*))m10329_gshared)(__this, p0, p1, method)
