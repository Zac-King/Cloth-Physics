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

extern "C" void t1138_marshal(const t1138& unmarshaled, t1138_marshaled& marshaled);
extern "C" void t1138_marshal_back(const t1138_marshaled& marshaled, t1138& unmarshaled);
extern "C" void t1138_marshal_cleanup(t1138_marshaled& marshaled);
