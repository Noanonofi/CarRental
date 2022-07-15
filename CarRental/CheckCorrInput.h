#pragma once
#include <iostream>

class CheckCorrInput
{
public:
	bool checkCorrInputName(const std::string& name) const;
	bool checkCorrInputSurname(const std::string& surname) const;
	bool checkCorrInputPatronymic(const std::string& patronymic) const;
};

