#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "CheckCorrectInput.h"


class ProfileClientINFO
{
public:
	ProfileClientINFO();
	ProfileClientINFO(const std::string& loginClient, const std::string& passwordClient, const std::string& emailClient);
public:
	void setLoginClient(const std::string& loginClient_);
	void setPasswordClient(const std::string& passwordClient_);
	void setEmailClient(const std::string& emailClient_);

	void printLogin() const;
	void printPassword() const;
	void printEmail() const;
	void printDisplayAllInfo() const;


	std::string getLoginClient() const { return loginCLient; }
	std::string getEmailCLient() const { return emailClient; }
	std::string getPasswordCLient() const { return passwordClient; }

private:
	std::string loginCLient;
	std::string passwordClient;
	std::string emailClient;
private:
	CheckCorrectInput checkCorrectInput;
};

