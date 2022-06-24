#include "ProfileClient.h"

ProfileClient::ProfileClient() {}

ProfileClient::ProfileClient(const std::string& loginClient, std::string& passwordClient, std::string& emailClient)
	:loginClient{loginClient},
	passwordClient{passwordClient},
	emailClient{emailClient} {}

std::string ProfileClient::getLogin() const
{
	return loginClient;
}

std::string ProfileClient::getEmail() const
{
	return emailClient;
}
