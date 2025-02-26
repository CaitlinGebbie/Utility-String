#include "String.h"

#include <iostream>
#include <string>
#include <cctype>

int main() {

	String Text_String = "Hello";
	String Text_String2 = "Worlds";

	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";

	Text_String.operator[](0);
	std::cout << "\n";

	Text_String.operator==(Text_String2); // Checks if "Hello" and "Worlds" are the same or different

	std::cout << Text_String.Length() << std::endl; // Length of "Hello"
	std::cout << Text_String2.Length() << std::endl; // Length of "Worlds"

	Text_String.Append(Text_String2); // Adds "Worlds" to the end of "Hello"
	Text_String.WriteToConsole();
	std::cout << Text_String.Length() << std::endl; // Find the length of "Hello Worlds"
	std::cout << "\n";

	bool lessThan = Text_String.operator<(Text_String2);
	std::cout << "LessThan: " << lessThan << std::endl;
	std::cout << "\n";
	lessThan = Text_String2.operator<(Text_String);
	std::cout << "GreaterThan: " << lessThan << std::endl;
	std::cout << "\n";

	Text_String.operator=(Text_String2);

	Text_String.ToUpper(); // Convert all characters to uppercase 
	Text_String.WriteToConsole();
	Text_String.ToLower(); // Convert all characters to lowercase 
	Text_String.WriteToConsole();
	std::cout << "\n";

	int findChar = Text_String.FindCharacter('l'); // Return the location of the character as an int. If not found, return -1
	std::cout << findChar << std::endl;
	std::cout << "\n";

	Text_String.WriteToConsole();
	std::cout << "\n";

	Text_String.WriteToConsole();
	int replaceChar = Text_String.Replace('l', 'k');
	std::cout << replaceChar << std::endl;
	Text_String.WriteToConsole();
	std::cout << "\n";

	std::cout << "Input your name." << std::endl;
	Text_String.ReadFromConsole();
	Text_String.WriteToConsole();
	std::cout << "\n";

	Text_String.ToUpper(); // Convert all characters to uppercase 
	Text_String.WriteToConsole();
}