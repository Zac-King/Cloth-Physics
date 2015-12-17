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

extern "C" void t735_marshal(const t735& unmarshaled, t735_marshaled& marshaled);
extern "C" void t735_marshal_back(const t735_marshaled& marshaled, t735& unmarshaled);
extern "C" void t735_marshal_cleanup(t735_marshaled& marshaled);
