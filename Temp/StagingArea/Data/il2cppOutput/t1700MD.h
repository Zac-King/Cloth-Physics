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

struct t1700;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10317_gshared (t1700 * __this, const MethodInfo* method);
#define m10317(__this, method) (( void (*) (t1700 *, const MethodInfo*))m10317_gshared)(__this, method)
extern "C" int32_t m10318_gshared (t1700 * __this, t2 * p0, const MethodInfo* method);
#define m10318(__this, p0, method) (( int32_t (*) (t1700 *, t2 *, const MethodInfo*))m10318_gshared)(__this, p0, method)
extern "C" bool m10319_gshared (t1700 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m10319(__this, p0, p1, method) (( bool (*) (t1700 *, t2 *, t2 *, const MethodInfo*))m10319_gshared)(__this, p0, p1, method)
