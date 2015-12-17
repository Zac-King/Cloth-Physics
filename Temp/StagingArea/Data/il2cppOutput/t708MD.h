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


#include "codegen/il2cpp-codegen.h"

extern "C" void t708_marshal(const t708& unmarshaled, t708_marshaled& marshaled);
extern "C" void t708_marshal_back(const t708_marshaled& marshaled, t708& unmarshaled);
extern "C" void t708_marshal_cleanup(t708_marshaled& marshaled);
