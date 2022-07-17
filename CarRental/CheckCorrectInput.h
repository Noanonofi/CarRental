#pragma once
#include <string>
#include <iostream>

class CheckCorrectInput
{
public:
	bool checkLoginClient(const std::string& loginClient);
	bool checkPasswordClient(const std::string& passwordClient);
	bool checkEmailClient(const std::string& emailClient);
};

