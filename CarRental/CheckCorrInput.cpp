#include "CheckCorrInput.h"

bool CheckCorrInput::checkCorrInputName(const std::string& name) const
{
	uint8_t MinNameLength = 5u;
	if (name.length() > MinNameLength) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckCorrInput::checkCorrInputSurname(const std::string& surname) const
{
	uint8_t MinSurnameLength = 5u;
	if (surname.length() > MinSurnameLength) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckCorrInput::checkCorrInputPatronymic(const std::string& patronymic) const
{
	uint8_t MinPatronymicLength = 5u;
	if (patronymic.length() > MinPatronymicLength) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckCorrInput::checkCorrInputLogin(const std::string& login) const
{
	uint8_t MinLoginLength = 3u;
	if (login.length() > MinLoginLength) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckCorrInput::checkCorrInputPassword(const std::string& password) const
{
	uint8_t MinPasswordLength = 8u;
	if (password.length() > MinPasswordLength) {
		return true;
	}
	else {
		return false;
	}
}

bool CheckCorrInput::checkCorrInputEmail(const std::string& email) const
{
	uint8_t MinEmailLength = 8u;
	if (email.length() > MinEmailLength) {
		return true;
	}
	else {
		return false;
	}
}
