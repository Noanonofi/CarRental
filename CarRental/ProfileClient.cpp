#include "ProfileClient.h"

ProfileClient::ProfileClient() {}

ProfileClient::ProfileClient(const std::string& loginClient, std::string& passwordClient, std::string& emailClient)
	:loginClient{loginClient},
	passwordClient{passwordClient},
	emailClient{emailClient} {}

void ProfileClient::setLogin(const std::string& login)
{
	loginClient = login;
}

void ProfileClient::setPassword(const std::string& password)
{
	passwordClient = password;
}

void ProfileClient::setEmail(const std::string& email)
{
	emailClient = email;
}

std::string ProfileClient::getLogin() const
{
	return loginClient;
}

std::string ProfileClient::getEmail() const
{
	return emailClient;
}
