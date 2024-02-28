#pragma once
#include <iostream>
#include <string>
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

