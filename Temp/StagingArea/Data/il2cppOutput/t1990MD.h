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

struct t1990;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14277_gshared (t1990 * __this, const MethodInfo* method);
#define m14277(__this, method) (( void (*) (t1990 *, const MethodInfo*))m14277_gshared)(__this, method)
extern "C" void m14278_gshared (t2 * __this , const MethodInfo* method);
#define m14278(__this , method) (( void (*) (t2 * , const MethodInfo*))m14278_gshared)(__this , method)
extern "C" int32_t m14279_gshared (t1990 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m14279(__this, p0, p1, method) (( int32_t (*) (t1990 *, t2 *, t2 *, const MethodInfo*))m14279_gshared)(__this, p0, p1, method)
extern "C" t1990 * m14280_gshared (t2 * __this , const MethodInfo* method);
#define m14280(__this , method) (( t1990 * (*) (t2 * , const MethodInfo*))m14280_gshared)(__this , method)
