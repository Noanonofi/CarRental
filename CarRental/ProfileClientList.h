#pragma once
#include "ProfileClientINFO.h"
#include <vector>
#include <fstream>

class ProfileClientList
{
public:
	void saveData();
	void loadData();

	void addLogin(const std::string& loginClient_);
	void addEmail(const std::string& emailClient);
public:
	bool searchLogin(const std::string& loginClient) const;
	bool searchEmail(const std::string& email) const;
private:
	std::vector<ProfileClientINFO> profileClientList;
	ProfileClientINFO readClientFromFile(std::ifstream& fstrName);
	const std::string filename = "Clients.dat";
	ProfileClientINFO profile;
};