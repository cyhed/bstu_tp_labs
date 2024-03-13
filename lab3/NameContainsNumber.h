#pragma once
#include <iostream>
class NameContainsNotNumber : public std::exception
{
public:
	NameContainsNotNumber(const std::string& message) : message{ message }
	{}
	const char* what() const noexcept override
	{
		return message.c_str();     // �������� �� std::string ������ const char*
	}
private:
	std::string message;    // ��������� �� ������
};

