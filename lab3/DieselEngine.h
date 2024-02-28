#pragma once
#include "InternalCombustionEngine.h"
class DieselEngine :
	public InternalCombustionEngine
{
public:
	DieselEngine(std::string name) : InternalCombustionEngine(name) {};
	std::string Show()   {
		return this->name + " DieselEngine";
	}
};

