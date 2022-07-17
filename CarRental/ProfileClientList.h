#pragma once
#include "ProfileClientINFO.h"
#include <vector>
#include <fstream>

class ProfileClientList
{
public:
	void loadData();
	void saveData();

	void addClient(const std::string& loginClient, const std::string& passwordClient, const std::string& emailCLient);
	void addLogin(const std::string& loginClient_);
	void addEmail(const std::string& emailClient);
public:
	bool searchLogin(const std::string& loginClient);
	bool searchEmail(const std::string& email);
private:
	std::vector<ProfileClientINFO> profileClientList;
	ProfileClientINFO readClientFromFile(std::ifstream& fstrName);
	const std::string filename = "Clients.dat";
	ProfileClientINFO profile;
};

