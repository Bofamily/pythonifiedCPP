// pythonifiedCPP.h : Include file for standard system include files,
// or project specific include files.

//INCLUDED FUNCTIONS:
/*
- print(input) - prints the input string to the console and returns 0 --- Example: print("Hello, World!")
- pytime::wait the same as time.wait in python in MILLISECONDS --- Example: time::wait(1000) waits one second
*/

#pragma once

#include <iostream>

int print(const std::string& input) {
	std::cout << input << std::endl;
	return 0;
}

#include <stdlib.h>
#include <chrono>
#include <thread>

namespace pytime {
	int sleep(float seconds) {
		int milliseconds = static_cast<int>(seconds * 1000);
		std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
		return 0;
	}
}
