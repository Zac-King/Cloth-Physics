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

struct t1980;

#include "codegen/il2cpp-codegen.h"
#include "t6.h"

extern "C" void m14131_gshared (t1980 * __this, const MethodInfo* method);
#define m14131(__this, method) (( void (*) (t1980 *, const MethodInfo*))m14131_gshared)(__this, method)
extern "C" int32_t m14132_gshared (t1980 * __this, t6  p0, t6  p1, const MethodInfo* method);
#define m14132(__this, p0, p1, method) (( int32_t (*) (t1980 *, t6 , t6 , const MethodInfo*))m14132_gshared)(__this, p0, p1, method)
