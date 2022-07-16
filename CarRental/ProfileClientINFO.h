#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "CheckCorrectInput.h"


class ProfileClientINFO
{
public:
	ProfileClientINFO(const std::string& loginClient, const std::string& passwordClient, const std::string& emailClient);
public:
	void setLoginClient(const std::string& loginClient);
	void setPasswordClient(const std::string& passwordClient);
	void setEmailClient(const std::string& emailClient);

	void printLogin();
	void printPassword();
	void printEmail();
	void printDisplayAllInfo();

	std::string getLoginClient() { return loginCLient; }
	std::string getEmailCLient() { return emailClient; }
public:
	void saveProfileCLientData();

private:
	std::string loginCLient;
	std::string passwordClient;
	std::string emailClient;
private:
	CheckCorrectInput checkCorrectInput;
};

