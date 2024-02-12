#include "Engine.h"


int Engine::count = 0;

std::string Engine::Show() {
	return this->name;
}

int Engine::GetCount() {
	return count;
}

Engine::Engine() {	
	++count;
	name = "none";
}

Engine::Engine(std::string name) {
	++count;
	if (name.find("\n") != std::string::npos || name.empty()) {
		throw (name);
	}
	this->name = name;
}

Engine::~Engine() {	
	--count;
}