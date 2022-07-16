#pragma once
#include "ProfileClientINFO.h"
#include <vector>

class ProfileClientList
{
public:
	void addClient(const std::string& loginClient, const std::string& passwordClient, const std::string& emailClient);
	bool searchLogin(const std::string& loginClient);
	bool searchEmail(const std::string& emailClient);
private:
	std::vector<ProfileClientINFO> profileClientList;
};

