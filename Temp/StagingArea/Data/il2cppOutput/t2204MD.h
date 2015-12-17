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

struct t2204;

#include "codegen/il2cpp-codegen.h"
#include "t1223.h"

extern "C" void m16556_gshared (t2204 * __this, const MethodInfo* method);
#define m16556(__this, method) (( void (*) (t2204 *, const MethodInfo*))m16556_gshared)(__this, method)
extern "C" int32_t m16557_gshared (t2204 * __this, t1223  p0, t1223  p1, const MethodInfo* method);
#define m16557(__this, p0, p1, method) (( int32_t (*) (t2204 *, t1223 , t1223 , const MethodInfo*))m16557_gshared)(__this, p0, p1, method)
