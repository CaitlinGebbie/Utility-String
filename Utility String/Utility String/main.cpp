#include "String.h"

#include <iostream>
#include <string>
#include <cctype>

int main() {

	String text;

	text = "Testing";
	String text2 = text;

	text.WriteToConsole();
	std::cout << text.Length() << std::endl;
	text2.WriteToConsole();
}