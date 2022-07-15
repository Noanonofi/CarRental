#pragma once
#include "ContactClientINFO.h"
#include "InformationUser.h"
#include <string>
#include <nlohmann/json.hpp>

class CreateUser
{
public:
	CreateUser();

	CreateUser(const std::string nameClient_, const std::string surnameClient_, const std::string patronymicClient_,nlohmann::json json);
private:
	ContactClientINFO contactINFO;
	InformationUser inrormationUser;
};

