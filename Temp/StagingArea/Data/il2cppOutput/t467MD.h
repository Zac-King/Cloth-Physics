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

struct t467;
struct t467_marshaled;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m2758 (t467 * __this, t2 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2759 (t467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2760 (t2 * __this , t467 * p0, t467 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t467_marshal(const t467& unmarshaled, t467_marshaled& marshaled);
extern "C" void t467_marshal_back(const t467_marshaled& marshaled, t467& unmarshaled);
extern "C" void t467_marshal_cleanup(t467_marshaled& marshaled);
