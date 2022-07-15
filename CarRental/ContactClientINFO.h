#pragma once
#include <iostream>
#include "CheckCorrInput.h"

class ContactClientINFO {
public:
	ContactClientINFO();

	ContactClientINFO(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_);

	void setNameClient(const std::string& nameClient_);
	void setSurnameClient(const std::string& surnameClient_);
	void setPatronymicClient(const std::string& patronymicClient_);
public:
	std::string nameClient;
	std::string surnameClient;
	std::string patronymicClient;
private:
	CheckCorrInput checkCorrentInput;
};

