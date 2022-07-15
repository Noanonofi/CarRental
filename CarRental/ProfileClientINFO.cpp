#include "ProfileClientINFO.h"

ProfileClientINFO::ProfileClientINFO(const std::string& loginClient_, const std::string& passwordClient_, const std::string& emailClient_)
	:loginClient(loginClient_),
	passwordClient(passwordClient_),
	emailClient(emailClient_)
{}

void ProfileClientINFO::setLoginClient(const std::string & login)
{
	if (checkCorrentInput.checkCorrInputLogin(login)) {
		loginClient = login;
	} else {
		throw std::runtime_error("The name cannot be less than 5 characters long");
	}
}

void ProfileClientINFO::setPasswordClient(const std::string& password)
{
	if (checkCorrentInput.checkCorrInputLogin(password)) {
		passwordClient = password;
	}
	else {
		throw std::runtime_error("The name cannot be less than 5 characters long");
	}
}

void ProfileClientINFO::setEmailClient(const std::string& email)
{
	if (checkCorrentInput.checkCorrInputLogin(email)) {
		emailClient = email;
	}
	else {
		throw std::runtime_error("The name cannot be less than 5 characters long");
	}
}
