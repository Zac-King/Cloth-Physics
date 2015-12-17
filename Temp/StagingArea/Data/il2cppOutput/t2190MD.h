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

struct t2190;

#include "codegen/il2cpp-codegen.h"
#include "t1224.h"

extern "C" void m16378_gshared (t2190 * __this, const MethodInfo* method);
#define m16378(__this, method) (( void (*) (t2190 *, const MethodInfo*))m16378_gshared)(__this, method)
extern "C" int32_t m16379_gshared (t2190 * __this, t1224  p0, const MethodInfo* method);
#define m16379(__this, p0, method) (( int32_t (*) (t2190 *, t1224 , const MethodInfo*))m16379_gshared)(__this, p0, method)
extern "C" bool m16380_gshared (t2190 * __this, t1224  p0, t1224  p1, const MethodInfo* method);
#define m16380(__this, p0, p1, method) (( bool (*) (t2190 *, t1224 , t1224 , const MethodInfo*))m16380_gshared)(__this, p0, p1, method)
