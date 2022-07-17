#include "ProfileClientINFO.h"

ProfileClientINFO::ProfileClientINFO() {}

ProfileClientINFO::ProfileClientINFO(const std::string& loginClient, const std::string& passwordClient, const std::string& emailClient)
	:loginCLient(loginClient),
	passwordClient(passwordClient),
	emailClient(emailClient)
{}


void ProfileClientINFO::setLoginClient(const std::string& loginClient_)
{
	if (checkCorrectInput.checkLoginClient(loginClient_)) {
		this->loginCLient = loginClient_;
	}
}

void ProfileClientINFO::setPasswordClient(const std::string& passwordClient_)
{
	if (checkCorrectInput.checkPasswordClient(passwordClient_)) {
		passwordClient = passwordClient_;
	}
}

void ProfileClientINFO::setEmailClient(const std::string& emailClient_)
{
	if (checkCorrectInput.checkEmailClient(emailClient_)) {
		emailClient = emailClient_;
	}
}

void ProfileClientINFO::printLogin()
{
	std::cout << "Login Client: " << loginCLient << std::endl;
}

void ProfileClientINFO::printPassword()
{
	std::cout << "Password Client: " << passwordClient << std::endl;
}

void ProfileClientINFO::printEmail()
{
	std::cout << "Email Client: " << emailClient << std::endl;
}

void ProfileClientINFO::printDisplayAllInfo()
{
	std::cout << "Login Client: " << loginCLient;
	std::cout << "Email Client: " << emailClient;
	std::cout << "Password Client: " << passwordClient;
}
