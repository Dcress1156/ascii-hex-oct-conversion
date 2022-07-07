#include <iostream>
#include "menu.h"
#include "operations.h"

int mainMenu()
{
	std::cout << "Please make your selection:\n";
	std::cout << "1) Get Hexadecimal and Octal value from number\n";
	std::cout << "2) Get ASCII code value from character\n";
	std::cout << "3) Exit Program\n";

	int selection{};
	std::cin >> selection;

	std::cout << selection;

	return selection;
}

void mainMenuCaller(int x)
{
	if (x == 1)
		numConv(numInput());
	else if (x == 2)
		asciiCode(charInput());
	else if (x == 3)
		std::cout << "\n\nGoodbye\n";
	exit;
}