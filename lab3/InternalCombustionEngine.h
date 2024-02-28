#pragma once
#include "Engine.h"
class InternalCombustionEngine : 
	public Engine
{
public:
	InternalCombustionEngine(std::string name) : Engine(name) {};
	std::string Show()   {
		return this->name + " InternalCombustionEngine";
	}
};

