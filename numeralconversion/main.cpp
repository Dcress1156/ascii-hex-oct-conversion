#include <iostream>
#include "menu.h"			// included so we can print the "main menu"

/* a console tool that does 2 things:
* 1. takes a number and converts it to hexadecimal and octal
* 2. takes a symbol and prints its ASCII code
* 
* variables used:
* 'x'		used for main menu selection
* 'x2'		used to get decimal-hexadecimal-octal conversion number from user input
* 'x3'		used to get character from user to print ASCII code
* 
* Made using what little C++ I know
*/

int main()
{
	mainMenuCaller(mainMenu());

	return 0;
}