#pragma once
#include <iostream>
#include <string>
class Engine
{
private:
	static int count;

	std::string name;
	
public:
	std::string Show();

	static int GetCount();

	Engine();
	Engine(std::string name);
	~Engine();
};

