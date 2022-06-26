#pragma once
#include <iostream>

class ProfileClient
{
public:
	ProfileClient();

	ProfileClient(const std::string& loginClient, std::string& passwordClient, std::string& emailClient);

	std::string getLogin() const;
	std::string getEmail() const;
public:	
	std::string loginClient;
	std::string passwordClient;
	std::string emailClient;
};

