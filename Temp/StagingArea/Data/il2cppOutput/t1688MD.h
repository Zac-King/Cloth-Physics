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

struct t1688;

#include "codegen/il2cpp-codegen.h"
#include "t1560.h"

extern "C" void m10124_gshared (t1688 * __this, const MethodInfo* method);
#define m10124(__this, method) (( void (*) (t1688 *, const MethodInfo*))m10124_gshared)(__this, method)
extern "C" int32_t m16797_gshared (t1688 * __this, t1560  p0, const MethodInfo* method);
#define m16797(__this, p0, method) (( int32_t (*) (t1688 *, t1560 , const MethodInfo*))m16797_gshared)(__this, p0, method)
extern "C" bool m16798_gshared (t1688 * __this, t1560  p0, t1560  p1, const MethodInfo* method);
#define m16798(__this, p0, p1, method) (( bool (*) (t1688 *, t1560 , t1560 , const MethodInfo*))m16798_gshared)(__this, p0, p1, method)
