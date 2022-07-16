#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include "ProfileClientList.h"
#include "ProfileClientINFO.h"
#include "CheckCorrectInput.h"

class Authorization
{
public:
	Authorization() = default;
	
	void RegistrartionSystem();
	void AuthorizationSystem();

private:
	std::string login;
	std::string password;
	std::string email;
private:
	ProfileClientList list;
	ProfileClientINFO profileINFO;
	CheckCorrectInput checkCorrectInput;
};

