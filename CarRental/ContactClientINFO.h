#pragma once
#include <iostream>
#include "CheckCorrInput.h"

class ContactClientINFO {
public:
	ContactClientINFO() = default;

	ContactClientINFO(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_);

	void setNameClient(const std::string& nameClient_);
	void setSurnameClient(const std::string& surnameClient_);
	void setPatronymicClient(const std::string& patronymicClient_);

	std::string getNameClient() const { return nameClient;}
	std::string getSurnameClient() const { return surnameClient; }
	std::string getPatronymicClient() const { return patronymicClient; }
public:
	std::string nameClient;
	std::string surnameClient;
	std::string patronymicClient;
private:
	CheckCorrInput checkCorrentInput;
};

