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

struct t410;
struct t410_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2446 (t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t410_marshal(const t410& unmarshaled, t410_marshaled& marshaled);
extern "C" void t410_marshal_back(const t410_marshaled& marshaled, t410& unmarshaled);
extern "C" void t410_marshal_cleanup(t410_marshaled& marshaled);
