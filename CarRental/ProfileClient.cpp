#include "ProfileClient.h"

ProfileClient::ProfileClient() {
	loginClient = "DefaultLogin";
	passwordClient = "DefaultPassword";
	emailClient = "DefaultEmail";
}

ProfileClient::ProfileClient(const std::string& loginClient, std::string& passwordClient, std::string& emailClient)
	:loginClient{loginClient},
	passwordClient{passwordClient},
	emailClient{emailClient} {}


const std::string& ProfileClient::getLogin() const
{
	return loginClient;
}

const std::string& ProfileClient::getEmail() const
{
	return emailClient;
}
