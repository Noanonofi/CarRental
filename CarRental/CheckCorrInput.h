#pragma once
#include <iostream>

class CheckCorrInput
{
public:
    bool checkCorrInputName(const std::string& name) const;
    bool checkCorrInputSurname(const std::string& surname) const;
    bool checkCorrInputPatronymic(const std::string& patronymic) const;

    bool checkCorrInputLogin(const std::string& login) const;
    bool checkCorrInputPassword(const std::string& password) const;
    bool checkCorrInputEmail(const std::string& email) const;
};

