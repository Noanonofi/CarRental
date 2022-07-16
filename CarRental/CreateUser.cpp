#include "CreateUser.h"

CreateUser::CreateUser(const std::string& nameClient_, const std::string& surnameClient_, const std::string& patronymicClient_, const std::string& loginClient_, const std::string& passwordClient_, const std::string& emailClient_)
{
	contactINFO = ContactClientINFO(nameClient_, surnameClient_, patronymicClient_);
	profileINFO = ProfileClientINFO(loginClient_, passwordClient_, emailClient_);
}

void CreateUser::Serialization(nlohmann::ordered_json JSON)
{
	JSON = 
	{
		{"Name Client" , contactINFO.getNameClient()},
		{"Surnmae Client", contactINFO.getSurnameClient()},
		{"Patronymic Client", contactINFO.getPatronymicClient()},
		{"login Client" , profileINFO.getLoginClient()},
		{"Password Client", profileINFO.getPasswordClient()},
		{"Email Client", profileINFO.getEmailClient()}
	};

	fileJSON.open("ClientINFO.json", std::fstream::out);

	if (fileJSON.is_open()) {
		fileJSON << JSON.dump(1, '\t', true);
		fileJSON.flush();
		std::cout << "Writing to the file was successful" << std::endl;
	}
	else {
		throw std::runtime_error("File is not open");
	}

	fileJSON.close();
}

void CreateUser::Deserialization()
{
	fileJSON.open("ClientINFO.json", std::fstream::in);

	std::string bufer;
	if (fileJSON.is_open()) {
		while (!fileJSON.eof()) {
			fileJSON >> bufer;
			std::cout << std::setw(4) << bufer << std::endl;
		}
	}

	fileJSON.close();
}
