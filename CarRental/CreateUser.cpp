#include "CreateUser.h"

CreateUser::CreateUser() {}

void CreateUser::setNameClient(const std::string& name)
{
	contactINFO.setNameClient(name);
}

void CreateUser::setSurnameClient(const std::string& surname)
{
	contactINFO.setSurnameClient(surname);
}

void CreateUser::setPatronymicClient(const std::string& patronymic)
{
	contactINFO.setPatronymicClient(patronymic);
}

void CreateUser::setLoginClient(const std::string& login)
{
	profileINFO.setLoginClient(login);
}

void CreateUser::setPasswordClient(const std::string& password)
{
	profileINFO.setPasswordClient(password);
}

void CreateUser::setEmailClient(const std::string& email)
{
	profileINFO.setEmailClient(email);
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
		std::cout << "\n" << "Writing to the file was successful" << std::endl;
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
