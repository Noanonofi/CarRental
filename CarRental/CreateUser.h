#pragma once
#include "ProfileClient.h"
#include "ContactInformationClient.h"

class CreateUser
{
public:
	CreateUser
	(
		// Contact info
		const std::string& nameClient,
		const std::string& surmameClient,
		const std::string& patronymicClient,
		const unsigned int& phoneNumberClient,
		const unsigned int& pasportDataClient,
		// Profile info 
		const std::string& loginClient, 
		std::string& passwordClient, 
		std::string& emailClient
	);
private:
	ProfileClient profileClient;
	ContactInformationClient contactInfoClient;
};

