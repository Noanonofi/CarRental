#include <iostream>
#include "Authorization.h"
#include "ProfileClientList.h"

int main()
{
	setlocale(0, "");
	Authorization auth;
	ProfileClientList list;
	
	// Регистрируем 2 аккаунта
	auth.RegistrartionSystem();
	auth.RegistrartionSystem();
	// Авторизация. Нельзя зайти под логином второго аккаунта с паролем первого
	auth.AuthorizationSystem();
	auth.AuthorizationSystem();
}

