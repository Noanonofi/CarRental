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
		loginCLient = loginClient_;
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

void ProfileClientINFO::printLogin() const
{
	std::cout << "Login Client: " << loginCLient << std::endl;
}

void ProfileClientINFO::printPassword() const
{
	std::cout << "Password Client: " << passwordClient << std::endl;
}

void ProfileClientINFO::printEmail() const
{
	std::cout << "Email Client: " << emailClient << std::endl;
}

void ProfileClientINFO::printDisplayAllInfo() const
{
	std::cout << "Login Client: " << loginCLient << std::endl;
	std::cout << "Email Client: " << emailClient << std::endl;
	std::cout << "Password Client: " << passwordClient << std::endl;
}
