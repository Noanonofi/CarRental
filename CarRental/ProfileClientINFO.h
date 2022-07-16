#pragma once
#include <iostream>
#include "CheckCorrInput.h"
#include <string>

class ProfileClientINFO
{
public:
    ProfileClientINFO() = default;

    ProfileClientINFO(const std::string& loginClient_, const std::string& passwordClient_, const std::string& emailClient_);

    std::string getLoginClient() const;
    std::string getPasswordClient() const;
    std::string getEmailClient() const;

    void setLoginClient(const std::string& login);
    void setPasswordClient(const std::string& password);
    void setEmailClient(const std::string& email);
private:
    CheckCorrInput checkCorrInput;
    std::string loginClient;
    std::string passwordClient;
    std::string emailClient;
};

