#include "UserSettings.h"

UserSettings::UserSettings() {}

void UserSettings::changeName(const std::string& name)
{
	if (checkingCorrectnessData.checkingCorrInputName(name)) {
		contactInformationUser.setName(name);
	}
}

void UserSettings::changeSurname(const std::string& surname)
{
	if (checkingCorrectnessData.checkingCorrInputSurname(surname)) {
		contactInformationUser.setSurmame(surname);
	}
}

void UserSettings::changePatronymic(const std::string& patronymic)
{
	if (checkingCorrectnessData.checkingCorrInputPatronymic(patronymic)) {
		contactInformationUser.setPatronymic(patronymic);
	}
}

void UserSettings::changePhoneNumber(const unsigned int& phoneNumber)
{
	if (checkingCorrectnessData.checkingCorrInputPhoneNumber(phoneNumber)) {
		contactInformationUser.setPhoneNumber(phoneNumber);
	}
}

void UserSettings::changePassportData(const unsigned int& passportData)
{
	if (checkingCorrectnessData.checkingCorrInputPassportData(passportData)) {
		contactInformationUser.setPasportData(passportData);
	}
}

void UserSettings::changeLogin(const std::string& login)
{
	if (checkingCorrectnessData.checkingCorrInputLogin(login)) {
		profile.setLogin(login);
	}
}

void UserSettings::changePassword(const std::string& password)
{
	if (checkingCorrectnessData.checkingCorrInputPassword(password)) {
		profile.setPassword(password);
	}
}

void UserSettings::changeEmail(const std::string& email)
{
	if (checkingCorrectnessData.checkingCorrInputEmail(email)) {
		profile.setEmail(email);
	}
}
