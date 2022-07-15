#include "CreateUser.h"

CreateUser::CreateUser(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_, const std::string& loginClient_, const std::string& passwordClient_, const std::string& emailClient_)
{
	contactINFO = ContactClientINFO(nameClient_, surnameClient_, patronymicClient_);
	profileINFO = ProfileClientINFO(loginClient_, passwordClient_, emailClient_);
}
