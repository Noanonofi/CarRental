#pragma once
#include "ContactClientINFO.h"
#include "ProfileClientINFO.h"
#include "CreateUser.h"
#include <Windows.h>
#include "CheckCorrInput.h"

class Authorization
{
public:
	Authorization() {};
	
	void RegistrartionSystem();
	void AuthorizationSystem();

private:
	std::string login;
	std::string password;
	CreateUser createUser;
	CheckCorrInput checkCorrInput;
};

