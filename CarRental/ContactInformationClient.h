#pragma once
#include <iostream>
class ContactInformationClient
{
public:
	ContactInformationClient();

	ContactInformationClient
	(
		const std::string& nameClient,
		const std::string& surmameClient,
		const std::string& patronymicClient,
		const unsigned int& phoneNumberClient,
		const unsigned int& pasportDataClient

	);

	void setName(const std::string& nameClient);
	void setSurmame(const std::string& surmameClient);
	void setPatronymic(const std::string& patronymicClient);
	void setPhoneNumber(const unsigned int& phoneNumberClient);
	void setPasportData(const unsigned int& pasportDataClient);

	std::string getName() const;
	std::string getSurmame() const;
	std::string getPatronymic() const;
	unsigned int getPhoneNumberClient() const;
	unsigned int getPasportDataClient() const;

private:
	std::string nameClient;
	std::string surmameClient;
	std::string patronymicClient;
	unsigned int phoneNumberClient{};
	unsigned int pasportDataClient{};
};

