#include "Engine.h"
#include "NameContainsNumber.h"


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
		throw std::invalid_argument("invalid name");
	}
	else if(name.length() >= 10) {
		throw std::length_error("max size = 10");
	}
	else if (name.find("#") != std::string::npos || 
		name.find("@") != std::string::npos || 
		name.find("%") != std::string::npos || 
		name.find("!") != std::string::npos || 
		name.find("$") != std::string::npos || 
		name.find("&") != std::string::npos ||
		name.find("^") != std::string::npos || 
		name.find("?") != std::string::npos ){
		throw std::string("spec symbols");
	}else if (name.find("1") != std::string::npos ||
		name.find("2") != std::string::npos ||
		name.find("3") != std::string::npos ||
		name.find("4") != std::string::npos ||
		name.find("5") != std::string::npos ||
		name.find("6") != std::string::npos ||
		name.find("7") != std::string::npos ||
		name.find("8") != std::string::npos ||
		name.find("9") != std::string::npos ||
		name.find("0") != std::string::npos){ }
	else
		throw NameContainsNotNumber("contains not number ");
	
	this->name = name;			
	this->count++;
}

Engine::~Engine() {	
	--count;
}