#pragma once
#include "ContactInformationClient.h"
#include "ProfileClient.h"

class Client
{
public:
	void printName() const;
	void printSurmame() const;
	void printPatronymic() const;
	void printPhoneNumber() const;
	void printPasportData() const;
private:
	ContactInformationClient contactInfoClient;
	ProfileClient profileClient;
};

