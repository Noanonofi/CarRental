#pragma once
#include <iostream>
#include "CheckCorrInput.h"

class ContactClientINFO {
public:
    ContactClientINFO() = default;

    ContactClientINFO(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_);

    ContactClientINFO(const std::string& nameClient);

    void setNameClient(const std::string& nameClient_);
    void setSurnameClient(const std::string& surnameClient_);
    void setPatronymicClient(const std::string& patronymicClient_);

    std::string getNameClient() const;
    std::string getSurnameClient() const;
    std::string getPatronymicClient() const;
public:
    std::string nameClient;
    std::string surnameClient;
    std::string patronymicClient;
private:
    CheckCorrInput checkCorrInput;
};

