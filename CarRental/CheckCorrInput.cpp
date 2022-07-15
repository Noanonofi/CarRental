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
