#pragma once
#include "InternalCombustionEngine.h"
class TurbojetEngine :
    public InternalCombustionEngine
{
public:
    TurbojetEngine(std::string name) : InternalCombustionEngine(name) {};
};

