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

extern "C" void t1027_marshal(const t1027& unmarshaled, t1027_marshaled& marshaled);
extern "C" void t1027_marshal_back(const t1027_marshaled& marshaled, t1027& unmarshaled);
extern "C" void t1027_marshal_cleanup(t1027_marshaled& marshaled);
