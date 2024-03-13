#pragma once
#include <iostream>
#include <string>
#include "Engine.h"
#include "NameContainsNumber.h"
class Engine
{
private:
	static int count;
protected:
	std::string name;
	
public:
	virtual std::string  Show();
	std::string Show1() { return Show(); }

	static int GetCount();

	Engine();
	Engine(std::string name);
	 ~Engine();
};

