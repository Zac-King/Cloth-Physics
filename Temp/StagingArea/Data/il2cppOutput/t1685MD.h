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

struct t1685;

#include "codegen/il2cpp-codegen.h"
#include "t1541.h"

extern "C" void m10118_gshared (t1685 * __this, const MethodInfo* method);
#define m10118(__this, method) (( void (*) (t1685 *, const MethodInfo*))m10118_gshared)(__this, method)
extern "C" int32_t m16769_gshared (t1685 * __this, t1541  p0, t1541  p1, const MethodInfo* method);
#define m16769(__this, p0, p1, method) (( int32_t (*) (t1685 *, t1541 , t1541 , const MethodInfo*))m16769_gshared)(__this, p0, p1, method)
