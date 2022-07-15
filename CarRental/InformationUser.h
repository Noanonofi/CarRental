#pragma once
#include "ContactClientINFO.h"
class InformationUser
{
public:
	std::string getNameClient() const { return contactClientINFO.nameClient; }
	std::string getSurnameClint() const { return contactClientINFO.surnameClient; }
	std::string getPatronymicClient() const { return contactClientINFO.patronymicClient; }
private:
	ContactClientINFO contactClientINFO;
};

