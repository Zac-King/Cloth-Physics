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

struct t2000;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14421_gshared (t2000 * __this, const MethodInfo* method);
#define m14421(__this, method) (( void (*) (t2000 *, const MethodInfo*))m14421_gshared)(__this, method)
extern "C" void m14422_gshared (t2 * __this , const MethodInfo* method);
#define m14422(__this , method) (( void (*) (t2 * , const MethodInfo*))m14422_gshared)(__this , method)
extern "C" int32_t m14423_gshared (t2000 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m14423(__this, p0, p1, method) (( int32_t (*) (t2000 *, t2 *, t2 *, const MethodInfo*))m14423_gshared)(__this, p0, p1, method)
extern "C" t2000 * m14424_gshared (t2 * __this , const MethodInfo* method);
#define m14424(__this , method) (( t2000 * (*) (t2 * , const MethodInfo*))m14424_gshared)(__this , method)
