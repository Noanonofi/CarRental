#ifndef UserInterface_h
#define UserInterface_h
#pragma once
#include "UserSettings.h"
#include "Client.h"

class UserInterface
{
	void printMenu() const;
private:
	Client client;
	UserSettings settings;
};
#endif

