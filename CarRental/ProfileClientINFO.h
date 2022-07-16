#pragma once
#include <iostream>
#include "CheckCorrInput.h"
#include <string>

class ProfileClientINFO
{
public:
    ProfileClientINFO();

public:
    void setLoginClient(const std::string& login);
    void setPasswordClient(const std::string& password);
    void setEmailClient(const std::string& email);

public:
    std::string getLoginClient() const;
    std::string getPasswordClient() const;
    std::string getEmailClient() const;

private:
    CheckCorrInput checkCorrInput;
    std::string loginClient;
    std::string passwordClient;
    std::string emailClient;
};

