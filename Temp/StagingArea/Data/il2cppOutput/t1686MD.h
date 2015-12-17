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

struct t1686;

#include "codegen/il2cpp-codegen.h"
#include "t1541.h"

extern "C" void m10119_gshared (t1686 * __this, const MethodInfo* method);
#define m10119(__this, method) (( void (*) (t1686 *, const MethodInfo*))m10119_gshared)(__this, method)
extern "C" int32_t m16776_gshared (t1686 * __this, t1541  p0, const MethodInfo* method);
#define m16776(__this, p0, method) (( int32_t (*) (t1686 *, t1541 , const MethodInfo*))m16776_gshared)(__this, p0, method)
extern "C" bool m16777_gshared (t1686 * __this, t1541  p0, t1541  p1, const MethodInfo* method);
#define m16777(__this, p0, p1, method) (( bool (*) (t1686 *, t1541 , t1541 , const MethodInfo*))m16777_gshared)(__this, p0, p1, method)
