#pragma once
#include <iostream>

class ProfileClient
{
public:
	ProfileClient();

	ProfileClient(const std::string& loginClient, std::string& passwordClient, std::string& emailClient);

	void setLogin(const std::string& login);
	void setPassword(const std::string& password);
	void setEmail(const std::string& email);

	std::string getLogin() const;
	std::string getEmail() const;
private:
	std::string loginClient;
	std::string passwordClient;
	std::string emailClient;
};

