#include "Authorization.h"

Authorization::Authorization() {}

void Authorization::RegistrartionSystem()
{
	std::cout << "======================================" << std::endl;
	std::cout << "\tCar Rental System" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;

	std::cout << "Register an account:" << std::endl << std::endl;

	//==============================================================================

	/*
	* Checking for login input until it is entered correctly
	*/
	bool isCorrect = false;
	do {
		std::cout << "Enter your username: ";
		std::cin >> login;
		std::cout << "\nCheck...." << login << std::endl << std::endl;
		Sleep(500);
		if (!list.searchLogin(login)) {
			std::cout << "Login is correct" << std::endl << std::endl;
			list.addLogin(login);
			isCorrect = false;
		}
		else { 
			std::cout << "Login is uncorrect, maybe login lenght < 5 symbol or this login is busy" << std::endl << std::endl;
			isCorrect = true;
		}
	} while (isCorrect);

	//==============================================================================

	/*
	* Checking for e-mail input until it is entered correctly
	*/

	do {
		std::cout << "Enter your email: ";
		std::cin >> email;
		std::cout << "\nCheck...." << email << std::endl << std::endl;
		Sleep(500);

		if (!list.searchEmail(email)) {
			std::cout << "Email is correct" << std::endl << std::endl;
			list.addEmail(email);
			isCorrect = false;
		}
		else { 
			std::cout << "Email is uncorrect, maybe email lenght < 5 symbol this email is busy" << std::endl;
			isCorrect = true;
		}
	} while (isCorrect);

	//==============================================================================

	/*
	* Checking for entering a password until it meets the conditions
	*/

	do {
		std::cout << "Enter your password: ";
		std::cin >> password;
		std::cout << "\nCheck...." << password << std::endl << std::endl;
		Sleep(500);
		
		profileINFO.setPasswordClient(password);

	} while (!checkCorrectInput.checkPasswordClient(password));


	std::cout << "======================================" << std::endl;
	std::cout << "\tRegistration is success" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;
}

void Authorization::AuthorizationSystem()
{
	std::cout << "======================================" << std::endl;
	std::cout << "\tCar Rental System" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;

	std::cout << "Sing in account:" << std::endl << std::endl;

	//==============================================================================

	std::string SingInLogin, SingInPassword;

	std::cout << "Enter your login specified during registration: ";
	std::cin >> SingInLogin;

	std::cout << "Enter your password specified during registration: ";
	std::cin >> SingInPassword;

	//==============================================================================

	std::cout << "\nCheck...." << "Login" << "Password" << std::endl << std::endl;
	Sleep(500);

	//==============================================================================

	if (SingInLogin == login && SingInPassword == password) {
		std::cout << "Login and password is correct!" << std::endl;
	}
	else {
		std::cout << "Login or password is uncorrect!" << std::endl;
	}
}
