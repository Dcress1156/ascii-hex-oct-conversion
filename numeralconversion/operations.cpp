#include <iostream>
#include "operations.h"

char charInput()
{
	std::cout << "\n\n\nPlease enter a single symbol (#, a, F, 1, etc.)\n";

	char userChar{};
	std::cin >> userChar;

	return userChar;
}

void asciiCode(char x3)
{
	std::cout << "Chosen symbol: " << x3 << '\n';
	std::cout << "Ascii Code: " << static_cast<int>(x3) << '\n';
}

int numInput()
{
	std::cout << "\n\n\nPlease enter an integer >>\n";

	int userNumber{};
	std::cin >> userNumber;

	return userNumber;
}

void numConv(int x2)						// number conversion function for hexadecimal and octal
{
	std::cout << '\n';
	std::cout << "Decimal:\t";
	std::cout << x2 << '\n';
	std::cout << "Hexadecimal:\t";
	std::cout << std::hex << x2 << '\n';
	std::cout << "Octal:\t\t";				// not sure why this needed two '\t' of these but it works
	std::cout << std::oct << x2 << '\n';

}