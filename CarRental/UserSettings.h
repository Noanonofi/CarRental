#ifndef UserSettings_h
#define UserSettings_h
#pragma once
#include "ContactInformationClient.h"
#include "ProfileClient.h"
#include "CheckingCorrectnessData.h"

class UserSettings
{
public:
	UserSettings();

	// Contact Info
	void changeName(const std::string& name);
	void changeSurname(const std::string& surname);
	void changePatronymic(const std::string& patronymic);
	void changePhoneNumber(const unsigned int& phoneNumber);
	void changePassportData(const unsigned int& passportData);
	// Profile Info
	void changeLogin(const std::string& login);
	void changePassword(const std::string& password);
	void changeEmail(const std::string& email);

private:
	ProfileClient profile;
	ContactInformationClient contactInformationUser;
	CheckingCorrectnessData checkingCorrectnessData;
};
#endif

