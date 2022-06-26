#ifndef Client_h
#define Client_h
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
	void printLogin() const;
	void printEmail() const;
private:
	ContactInformationClient contactInfoClient;
	ProfileClient profileClient;
};
#endif
