#pragma once
#include <iostream>

class ProfileClient
{
public:
	ProfileClient();

	ProfileClient(const std::string& loginClient, std::string& passwordClient, std::string& emailClient);
private:
	std::string loginClient;
	std::string passwordClient;
	std::string emailClient;
};

