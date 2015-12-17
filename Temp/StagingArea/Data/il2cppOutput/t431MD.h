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

extern "C" void t431_marshal(const t431& unmarshaled, t431_marshaled& marshaled);
extern "C" void t431_marshal_back(const t431_marshaled& marshaled, t431& unmarshaled);
extern "C" void t431_marshal_cleanup(t431_marshaled& marshaled);
