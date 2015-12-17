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

struct t337;
struct t337_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1655 (t337 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t337_marshal(const t337& unmarshaled, t337_marshaled& marshaled);
extern "C" void t337_marshal_back(const t337_marshaled& marshaled, t337& unmarshaled);
extern "C" void t337_marshal_cleanup(t337_marshaled& marshaled);
