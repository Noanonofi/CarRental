#include "CreateUser.h"

CreateUser::CreateUser()
{
	contactINFO = ContactClientINFO();
}

CreateUser::CreateUser(const std::string nameClient_, const std::string surnameClient_, const std::string patronymicClient_, nlohmann::json json)
{
	contactINFO = ContactClientINFO(nameClient_, surnameClient_, patronymicClient_);

	json = nlohmann::json{
		{{"Name Client" , inrormationUser.getNameClient()}},
		{{"Surnmae Client", inrormationUser.getSurnameClint()}},
		{{"Patronymic Client", inrormationUser.getPatronymicClient()}}
	};
}
