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

struct t2001;

#include "codegen/il2cpp-codegen.h"
#include "t79.h"

extern "C" void m14425_gshared (t2001 * __this, const MethodInfo* method);
#define m14425(__this, method) (( void (*) (t2001 *, const MethodInfo*))m14425_gshared)(__this, method)
extern "C" int32_t m14426_gshared (t2001 * __this, t79  p0, t79  p1, const MethodInfo* method);
#define m14426(__this, p0, p1, method) (( int32_t (*) (t2001 *, t79 , t79 , const MethodInfo*))m14426_gshared)(__this, p0, p1, method)
