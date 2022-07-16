#include "ProfileClientINFO.h"

void ProfileClientINFO::setLoginClient(const std::string& login)
{
    if (!checkCorrInput.checkCorrInputLogin(login))
        throw std::runtime_error("The name cannot be less than 5 characters long");
    else loginClient = login;
}

void ProfileClientINFO::setPasswordClient(const std::string& password)
{
    if (!checkCorrInput.checkCorrInputPassword(password))
        throw std::runtime_error("The name cannot be less than 5 characters long");
    else passwordClient = password;
}

void ProfileClientINFO::setEmailClient(const std::string& email)
{
    if (!checkCorrInput.checkCorrInputEmail(email))
        throw std::runtime_error("The name cannot be less than 5 characters long");
    else emailClient = email;
}

ProfileClientINFO::ProfileClientINFO() {}

std::string ProfileClientINFO::getLoginClient() const { return loginClient; }

std::string ProfileClientINFO::getPasswordClient() const { return passwordClient; }

std::string ProfileClientINFO::getEmailClient() const { return emailClient; }

