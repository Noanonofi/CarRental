#pragma once
#include <iostream>
#include "CheckCorrInput.h"
#include <string>

class ProfileClientINFO
{
public:
	ProfileClientINFO() = default;

	ProfileClientINFO(const std::string& loginClient_, const std::string& passwordClient_, const std::string& emailClient_);

	std::string getLoginClient() const { return loginClient;}
	std::string getPasswordClient() const { return passwordClient;}
	std::string getEmailClient() const { return emailClient;}

	void setLoginClient(const std::string& login);
	void setPasswordClient(const std::string& password);
	void setEmailClient(const std::string& email);
private:
	CheckCorrInput checkCorrentInput;
	std::string loginClient;
	std::string passwordClient;
	std::string emailClient;

};

