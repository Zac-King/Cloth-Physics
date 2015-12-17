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

struct t2076;
struct t2;
struct t178;
struct t179;

#include "codegen/il2cpp-codegen.h"
#include "t193.h"
#include "t365.h"

extern "C" void m15278_gshared (t2076 * __this, t2 * p0, t193 p1, const MethodInfo* method);
#define m15278(__this, p0, p1, method) (( void (*) (t2076 *, t2 *, t193, const MethodInfo*))m15278_gshared)(__this, p0, p1, method)
extern "C" int32_t m15279_gshared (t2076 * __this, t365  p0, t365  p1, const MethodInfo* method);
#define m15279(__this, p0, p1, method) (( int32_t (*) (t2076 *, t365 , t365 , const MethodInfo*))m15279_gshared)(__this, p0, p1, method)
extern "C" t2 * m15280_gshared (t2076 * __this, t365  p0, t365  p1, t179 * p2, t2 * p3, const MethodInfo* method);
#define m15280(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2076 *, t365 , t365 , t179 *, t2 *, const MethodInfo*))m15280_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15281_gshared (t2076 * __this, t2 * p0, const MethodInfo* method);
#define m15281(__this, p0, method) (( int32_t (*) (t2076 *, t2 *, const MethodInfo*))m15281_gshared)(__this, p0, method)
