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

extern "C" void t548_marshal(const t548& unmarshaled, t548_marshaled& marshaled);
extern "C" void t548_marshal_back(const t548_marshaled& marshaled, t548& unmarshaled);
extern "C" void t548_marshal_cleanup(t548_marshaled& marshaled);
