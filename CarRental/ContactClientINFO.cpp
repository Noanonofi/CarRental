#include "ContactClientINFO.h"

ContactClientINFO::ContactClientINFO()
	:nameClient("Default Name Client"),
	surnameClient("Default Surname Client"),
	patronymicClient("Default Patronymic Client")
{}

ContactClientINFO::ContactClientINFO(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_)
	:nameClient(nameClient_),
	surnameClient(surnameClient_),
	patronymicClient(patronymicClient_)
{}

void ContactClientINFO::setNameClient(const std::string& nameClient_)
{
	if (checkCorrentInput.checkCorrInputName(nameClient_)) {
		nameClient = nameClient_;
	} else {
		throw std::runtime_error("The name cannot be less than 5 characters long");
	}
}

void ContactClientINFO::setSurnameClient(const std::string& surnameClient_)
{
	if (checkCorrentInput.checkCorrInputSurname(surnameClient_)) {
		surnameClient = surnameClient_;
	}
	else {
		throw std::runtime_error("The last name cannot be less than 5 characters long");
	}
}

void ContactClientINFO::setPatronymicClient(const std::string& patronymicClient_)
{
	if (checkCorrentInput.checkCorrInputPatronymic(patronymicClient_)) {
		patronymicClient = patronymicClient_;
	} else {
		throw std::runtime_error("The patronymic cannot be less than 5 characters long");
	}
}
