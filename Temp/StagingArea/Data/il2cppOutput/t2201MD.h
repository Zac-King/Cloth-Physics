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

struct t2201;

#include "codegen/il2cpp-codegen.h"
#include "t1223.h"

extern "C" void m16545_gshared (t2201 * __this, const MethodInfo* method);
#define m16545(__this, method) (( void (*) (t2201 *, const MethodInfo*))m16545_gshared)(__this, method)
extern "C" int32_t m16546_gshared (t2201 * __this, t1223  p0, const MethodInfo* method);
#define m16546(__this, p0, method) (( int32_t (*) (t2201 *, t1223 , const MethodInfo*))m16546_gshared)(__this, p0, method)
extern "C" bool m16547_gshared (t2201 * __this, t1223  p0, t1223  p1, const MethodInfo* method);
#define m16547(__this, p0, p1, method) (( bool (*) (t2201 *, t1223 , t1223 , const MethodInfo*))m16547_gshared)(__this, p0, p1, method)
