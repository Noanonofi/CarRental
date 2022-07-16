#include "ProfileClientList.h"

void ProfileClientList::addClient(const std::string& loginClient, const std::string& passwordClient, const std::string& emailClient)
{
	profileClientList.push_back(ProfileClientINFO(loginClient, passwordClient, emailClient));
}

bool ProfileClientList::searchLogin(const std::string& loginClient)
{
	for (auto& var : profileClientList) {
		if (var.getLoginClient() != loginClient) {
			return true;
		}
		else {
			return false;
		}
	}
}

bool ProfileClientList::searchEmail(const std::string& emailClient)
{
	for (auto& var : profileClientList) {
		if (var.getEmailCLient() != emailClient) {
			return true;
		}
		else {
			return false;
		}
	}
}
