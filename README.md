# Pythonified C++
Pythonified C++ is a C++ library that provides a set of functions that mimic the behavior of Python's built-in functions. It allows developers to write C++ code that is more readable and easier to understand, similar to Python code.

# Current Functions:
print(input) - prints the input string to the console and returns 0 --- Example: print("Hello, World!")

pytime::sleep the same as time.sleep in python in SECONDS --- Example: pytime::sleep(1) waits one second

# Installation
To use Pythonified C++, simply include the `pythonifiedCPP.h` header file in your C++ project. You can download the header file from the repository and place it in your project's include directory.
Example usage:
```cpp
#include "pythonifiedCPP.h"

int main()
{
	print("Hello, World!");
	pytime::sleep(1);
	print("Goodbye, World!");
	return 0;
}
```
