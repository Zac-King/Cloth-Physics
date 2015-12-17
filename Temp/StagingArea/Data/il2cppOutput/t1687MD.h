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

struct t1687;

#include "codegen/il2cpp-codegen.h"
#include "t1560.h"

extern "C" void m10123_gshared (t1687 * __this, const MethodInfo* method);
#define m10123(__this, method) (( void (*) (t1687 *, const MethodInfo*))m10123_gshared)(__this, method)
extern "C" int32_t m16790_gshared (t1687 * __this, t1560  p0, t1560  p1, const MethodInfo* method);
#define m16790(__this, p0, p1, method) (( int32_t (*) (t1687 *, t1560 , t1560 , const MethodInfo*))m16790_gshared)(__this, p0, p1, method)
