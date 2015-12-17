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

struct t187;
struct t187_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2097 (t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2098 (t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2099 (t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t187_marshal(const t187& unmarshaled, t187_marshaled& marshaled);
extern "C" void t187_marshal_back(const t187_marshaled& marshaled, t187& unmarshaled);
extern "C" void t187_marshal_cleanup(t187_marshaled& marshaled);
