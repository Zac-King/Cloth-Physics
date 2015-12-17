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

struct t2233;

#include "codegen/il2cpp-codegen.h"
#include "t1541.h"

extern "C" void m16783_gshared (t2233 * __this, const MethodInfo* method);
#define m16783(__this, method) (( void (*) (t2233 *, const MethodInfo*))m16783_gshared)(__this, method)
extern "C" int32_t m16784_gshared (t2233 * __this, t1541  p0, const MethodInfo* method);
#define m16784(__this, p0, method) (( int32_t (*) (t2233 *, t1541 , const MethodInfo*))m16784_gshared)(__this, p0, method)
extern "C" bool m16785_gshared (t2233 * __this, t1541  p0, t1541  p1, const MethodInfo* method);
#define m16785(__this, p0, p1, method) (( bool (*) (t2233 *, t1541 , t1541 , const MethodInfo*))m16785_gshared)(__this, p0, p1, method)
