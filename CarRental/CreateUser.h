#pragma once
#include <string>
#include <nlohmann/json.hpp>
#include "ContactClientINFO.h"
#include "ProfileClientINFO.h"
#include "InformationUser.h"

class CreateUser
{
public:
	CreateUser() = default;

	CreateUser(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_, const std::string& loginClient_, const std::string& passwordClient_, const std::string& emailClient_);
private:
	ContactClientINFO contactINFO;
	ProfileClientINFO profileINFO;
	InformationUser inrormationUser;
};

