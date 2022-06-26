#include "CreateUser.h"

CreateUser::CreateUser
(
	const std::string& nameClient,
	const std::string& surmameClient,
	const std::string& patronymicClient,
	const unsigned int& phoneNumberClient,
	const unsigned int& pasportDataClient,
	const std::string& loginClient,
	std::string& passwordClient,
	std::string& emailClient
) 
{
	contactInfoClient = ContactInformationClient(nameClient, surmameClient, patronymicClient, phoneNumberClient, pasportDataClient);
	profileClient = ProfileClient(loginClient, passwordClient, emailClient);
}
