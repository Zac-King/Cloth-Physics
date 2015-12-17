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

extern "C" void t469_marshal(const t469& unmarshaled, t469_marshaled& marshaled);
extern "C" void t469_marshal_back(const t469_marshaled& marshaled, t469& unmarshaled);
extern "C" void t469_marshal_cleanup(t469_marshaled& marshaled);
