#pragma once
#include <string>
#include <nlohmann/json.hpp>
#include "ContactClientINFO.h"
#include "ProfileClientINFO.h"
#include <fstream>

class CreateUser
{
public:
	CreateUser() = delete;

	CreateUser(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_, const std::string& loginClient_, const std::string& passwordClient_, const std::string& emailClient_);

	void Serialization(nlohmann::ordered_json JSON);

	void Deserialization();
private:
	ContactClientINFO contactINFO;
	ProfileClientINFO profileINFO;
	std::fstream fileJSON{};
};

