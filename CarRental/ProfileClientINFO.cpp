#include "ProfileClientINFO.h"

ProfileClientINFO::ProfileClientINFO(const std::string& loginClient, const std::string& passwordClient, const std::string& emailClient)
	:loginCLient(loginClient),
	passwordClient(passwordClient),
	emailClient(emailClient)
{}

void ProfileClientINFO::setLoginClient(const std::string& loginClient)
{
	if (checkCorrectInput.checkLoginClient(loginCLient)) {
		this->loginCLient = loginClient;
	}
}

void ProfileClientINFO::setPasswordClient(const std::string& passwordClient)
{
	if (checkCorrectInput.checkPasswordClient(passwordClient)) {
		this->passwordClient = passwordClient;
	}
}

void ProfileClientINFO::setEmailClient(const std::string& emailClient)
{
	if (checkCorrectInput.checkEmailClient(emailClient)) {
		this->emailClient = emailClient;
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
