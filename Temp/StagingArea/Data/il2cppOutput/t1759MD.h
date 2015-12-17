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

struct t1759;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m11007_gshared (t1759 * __this, const MethodInfo* method);
#define m11007(__this, method) (( void (*) (t1759 *, const MethodInfo*))m11007_gshared)(__this, method)
extern "C" void m11008_gshared (t2 * __this , const MethodInfo* method);
#define m11008(__this , method) (( void (*) (t2 * , const MethodInfo*))m11008_gshared)(__this , method)
extern "C" int32_t m11009_gshared (t1759 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m11009(__this, p0, p1, method) (( int32_t (*) (t1759 *, t2 *, t2 *, const MethodInfo*))m11009_gshared)(__this, p0, p1, method)
extern "C" t1759 * m11010_gshared (t2 * __this , const MethodInfo* method);
#define m11010(__this , method) (( t1759 * (*) (t2 * , const MethodInfo*))m11010_gshared)(__this , method)
