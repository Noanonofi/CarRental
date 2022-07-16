#pragma once
#include <iostream>
#include "CheckCorrInput.h"

class ContactClientINFO {
public:
    ContactClientINFO();
public:
    void setNameClient(const std::string& nameClient_);
    void setSurnameClient(const std::string& surnameClient_);
    void setPatronymicClient(const std::string& patronymicClient_);
public:
    std::string getNameClient() const;
    std::string getSurnameClient() const;
    std::string getPatronymicClient() const;
private:
    std::string nameClient;
    std::string surnameClient;
    std::string patronymicClient;
private:
    CheckCorrInput checkCorrInput;
};

