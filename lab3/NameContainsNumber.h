#pragma once
#include <iostream>
class NameContainsNotNumber : public std::exception
{
public:
	NameContainsNotNumber(const std::string& message) : message{ message }
	{}
	const char* what() const noexcept override
	{
		return message.c_str();     // получаем из std::string строку const char*
	}
private:
	std::string message;    // сообщение об ошибке
};

