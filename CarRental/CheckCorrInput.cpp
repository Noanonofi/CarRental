#include "CheckCorrInput.h"

bool CheckCorrInput::checkCorrInputName(const std::string& name) const
{
    uint8_t MinNameLength;
    MinNameLength = 5u;
    return name.length() > MinNameLength;
}

bool CheckCorrInput::checkCorrInputSurname(const std::string& surname) const
{
    uint8_t MinSurnameLength;
    MinSurnameLength = 5u;
    return surname.length() > MinSurnameLength;
}

bool CheckCorrInput::checkCorrInputPatronymic(const std::string& patronymic) const
{
    uint8_t MinPatronymicLength;
    MinPatronymicLength = 5u;
    return patronymic.length() > MinPatronymicLength;
}

bool CheckCorrInput::checkCorrInputLogin(const std::string& login) const
{
    uint8_t MinLoginLength;
    MinLoginLength = 3u;
    return login.length() > MinLoginLength;
}

bool CheckCorrInput::checkCorrInputPassword(const std::string& password) const
{
    uint8_t MinPasswordLength;
    MinPasswordLength = 8u;
    return password.length() > MinPasswordLength;
}

bool CheckCorrInput::checkCorrInputEmail(const std::string& email) const
{
    uint8_t MinEmailLength;
    MinEmailLength = 8u;
    return email.length() > MinEmailLength;
}
