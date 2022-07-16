#pragma once
#include <string>
#include <nlohmann/json.hpp>
#include "ContactClientINFO.h"
#include "ProfileClientINFO.h"
#include <fstream>

class CreateUser
{
public:
	CreateUser();
public:
	void setNameClient(const std::string& name);
	void setSurnameClient(const std::string& surname);
	void setPatronymicClient(const std::string& patronymic);

	void setLoginClient(const std::string& login);
	void setPasswordClient(const std::string& password);
	void setEmailClient(const std::string& email);

public:
	void Serialization(nlohmann::ordered_json JSON);
	void Deserialization();
private:
	ContactClientINFO contactINFO;
	ProfileClientINFO profileINFO;
	std::fstream fileJSON{};
};

