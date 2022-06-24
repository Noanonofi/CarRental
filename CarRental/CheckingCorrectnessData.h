#pragma once
#include <iostream>

class CheckingCorrectnessData
{
public:
	bool checkingCorrInputName(const std::string& name) const;
	bool checkingCorrInputSurname(const std::string& surname) const;
	bool checkingCorrInputPatronymic(const std::string& patronymic) const;
	bool checkingCorrInputPhoneNumber(const unsigned int& phoneNumber) const;
	bool checkingCorrInputPassportData(const unsigned int& passportData) const;

	bool checkingCorrInputLogin(const std::string& login) const;
	bool checkingCorrInputPassword(const std::string& password) const;
	bool checkingCorrInputEmail(const std::string& email) const;
};

