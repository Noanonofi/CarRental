#include "CheckCorrectInput.h"

bool CheckCorrectInput::checkLoginClient(const std::string& loginClient)
{
    uint8_t minLoginLenght;
    minLoginLenght = 3u;

    if (loginClient.length() > minLoginLenght) return true;
    else return false;
}

bool CheckCorrectInput::checkPasswordClient(const std::string& passwordClient)
{
    uint8_t minPasswordLenght, maxPasswordLenght;
    minPasswordLenght = 8u, maxPasswordLenght = 16;

    if (passwordClient.length() >= minPasswordLenght && passwordClient.length() <= maxPasswordLenght) return true;
    else return false;
}

bool CheckCorrectInput::checkEmailClient(const std::string& emailClient)
{
    uint8_t minEmailLenght = 5u;

    if (emailClient.length() >= minEmailLenght) return true;
    else return false;
}
