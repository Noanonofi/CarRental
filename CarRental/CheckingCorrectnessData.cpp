#include "CheckingCorrectnessData.h"

bool CheckingCorrectnessData::checkingCorrInputName(const std::string& name) const
{
	if (name.length() > 3 && name.length() < 15) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckingCorrectnessData::checkingCorrInputSurname(const std::string& surname) const
{
	if (surname.length() > 3 && surname.length() < 20) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckingCorrectnessData::checkingCorrInputPatronymic(const std::string& patronymic) const
{
	if (patronymic.length() > 3 && patronymic.length() < 20) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckingCorrectnessData::checkingCorrInputPhoneNumber(const unsigned int& phoneNumber) const
{
	if (phoneNumber > 10000000000) { // 999-888-77-66
		return true;
	}
	else {
		return false;
	}
}

bool CheckingCorrectnessData::checkingCorrInputPassportData(const unsigned int& passportData) const
{
	if (passportData > 100000000) { // 11-22(serial)  333444(number)    
		return true;
	}
	else {
		return false;
	}
}

bool CheckingCorrectnessData::checkingCorrInputLogin(const std::string& login) const
{
	if (login.length() > 3 && login.length() < 10) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckingCorrectnessData::checkingCorrInputPassword(const std::string& password) const
{
	if (password.length() > 8) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckingCorrectnessData::checkingCorrInputEmail(const std::string& email) const
{
	if (email.length() > 6) { //@bk.ru
		return true;
	}
	else {
		return false;
	}
}
