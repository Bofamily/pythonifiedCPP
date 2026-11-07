// pythonifiedCPP.h : Include file for standard system include files,
// or project specific include files.

//INCLUDED FUNCTIONS:
/*
- print(input) - prints the input string to the console and returns 0 --- Example: print("Hello, World!")
*/

#pragma once

#include <iostream>

int print(const std::string& input) {
	std::cout << input << std::endl;
	return 0;
}
