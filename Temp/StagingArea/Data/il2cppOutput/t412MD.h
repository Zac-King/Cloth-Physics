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

struct t412;
struct t412_marshaled;
struct t22;
struct t326;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2100 (t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2101 (t2 * __this , t412 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t412 * m2102 (t2 * __this , t22* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t412 * m2103 (t2 * __this , t326 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t412 * m2104 (t2 * __this , t326 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t412_marshal(const t412& unmarshaled, t412_marshaled& marshaled);
extern "C" void t412_marshal_back(const t412_marshaled& marshaled, t412& unmarshaled);
extern "C" void t412_marshal_cleanup(t412_marshaled& marshaled);
