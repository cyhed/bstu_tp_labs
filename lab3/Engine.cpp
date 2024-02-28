#include "Engine.h"


int Engine::count = 0;

std::string Engine::Show() {
	return  this->name + " Engine";
}

int Engine::GetCount() {
	return count;
}

Engine::Engine() {	
	this->count++;	
	name = "none";
}

Engine::Engine(std::string name) {	
	
	if (name.find("\n") != std::string::npos || name.empty() || (name.find(" ") != std::string::npos ) ) {
		throw std::invalid_argument(name);
	}
	else if(name.length() >= 10) {
		throw std::length_error("max size = 10");
	}
	else if (name.find("#") != std::string::npos || 
		name.find("@") != std::string::npos) {
		throw std::string("spec symbols");
	}
	else {
		this->name = name;
	}		
	this->count++;
}

Engine::~Engine() {	
	--count;
}