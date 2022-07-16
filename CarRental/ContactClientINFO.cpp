#include "ContactClientINFO.h"

ContactClientINFO::ContactClientINFO() {}

void ContactClientINFO::setNameClient(const std::string& nameClient_)
{
    if (!checkCorrInput.checkCorrInputName(nameClient_))
        throw std::runtime_error("The name cannot be less than 5 characters long");
    else nameClient = nameClient_;
}

void ContactClientINFO::setSurnameClient(const std::string& surnameClient_)
{
    if (!checkCorrInput.checkCorrInputSurname(surnameClient_))
        throw std::runtime_error("The last name cannot be less than 5 characters long");
    else surnameClient = surnameClient_;
}

void ContactClientINFO::setPatronymicClient(const std::string& patronymicClient_)
{
    if (!checkCorrInput.checkCorrInputPatronymic(patronymicClient_))
        throw std::runtime_error("The patronymic cannot be less than 5 characters long");
    else patronymicClient = patronymicClient_;
}

std::string ContactClientINFO::getNameClient() const { return nameClient; }

std::string ContactClientINFO::getSurnameClient() const { return surnameClient; }

std::string ContactClientINFO::getPatronymicClient() const { return patronymicClient; }
