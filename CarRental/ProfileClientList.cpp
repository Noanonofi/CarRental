#include "ProfileClientList.h"

void ProfileClientList::loadData()
{
	std::ifstream ifstrName(filename, std::ios::binary);

	if (!ifstrName) {
		ifstrName.open(filename, std::ios::binary);
		ifstrName.close();
		ifstrName.open(filename, std::ios::binary);
	}
	ifstrName.seekg(0, std::ios::end);

	int temp = ifstrName.tellg() / sizeof(ProfileClientList);

	ifstrName.seekg(0, std::ios::end);

	for(size_t i = 0; i < temp; ++i){
		profileClientList.push_back(readClientFromFile(ifstrName));
	}
}

void ProfileClientList::saveData()
{
	std::ofstream ofstrFile;
	ofstrFile.open(filename, std::ios::out);

	for (auto& clients : profileClientList) {
		ofstrFile.write((char*)&clients, sizeof(ProfileClientList));
	}
}

void ProfileClientList::addClient(const std::string& loginClient, const std::string& passwordClient, const std::string& emailCLient)
{
	ProfileClientINFO profileINFO;

	profileINFO.setLoginClient(loginClient);
	profileINFO.setPasswordClient(passwordClient);
	profileINFO.setEmailClient(emailCLient);

	profileClientList.push_back(profileINFO);
}

bool ProfileClientList::searchLogin(const std::string& loginClient)
{
	for (auto& client : profileClientList) {
		if (loginClient == client.getLoginClient()) {
			return true;
		}
		else return false;
	}
}

bool ProfileClientList::searchEmail(const std::string& email)
{
	for (auto& client : profileClientList) {
		if (email == client.getEmailCLient()) {
			return true;
		}
		else return false;
	}
}

ProfileClientINFO ProfileClientList::readClientFromFile(std::ifstream& fstrName)
{
	ProfileClientINFO profofileINFO;

	fstrName.read((char*)&profofileINFO, sizeof(ProfileClientINFO));

	return profofileINFO;
}
