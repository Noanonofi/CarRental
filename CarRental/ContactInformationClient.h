#pragma once
#include <iostream>
class ContactInformationClient
{
public:
	ContactInformationClient();

	ContactInformationClient
	(
		const std::string& NameClient,
		const std::string& surmameClient,
		const std::string& patronymicClient,
		const unsigned int& phoneNumberClient,
		const unsigned int& pasportDataClient

	);
private:
	std::string nameClient;
	std::string surmameClient;
	std::string patronymicClient;
	unsigned int phoneNumberClient{};
	unsigned int pasportDataClient{};
};

