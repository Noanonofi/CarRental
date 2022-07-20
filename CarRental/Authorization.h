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
	Authorization();
	
	void RegistrartionSystem();
	void AuthorizationSystem();

private:
	/*
	* @param	login		Profile login specified during registration and authorization.
	* @param	password	Profile password specified during registration and authorization
	* @param	email		Profile email specified during registration and authorization
	*/
	std::string login;
	std::string password;
	std::string email;
private:
	/*
	* @param	ProfileClientList		List of all registered clients
	* @param	ProfileClientINFO		Each user's profile information
	* @param	CheckCorrectInput		Checking the correctness of data entry(login, password, email)
	*/
	ProfileClientList list;
	ProfileClientINFO profileINFO;
	CheckCorrectInput checkCorrectInput;
};

