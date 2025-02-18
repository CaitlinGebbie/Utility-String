#include "String.h"

#include <iostream>
#include <string>
#include <cctype>

int main() {
	 
	String Text_String = "Hello";
	//String Text_String2 = "World";

	Text_String.WriteToConsole();
	std::cout << Text_String.Length() << std::endl; // Find the length of the string
	Text_String.ToUpper(); // Convert all characters to uppercase
	std::cout << "\n";
	Text_String.ToLower(); // Convert all characters to lowercase
	std::cout << "\n";
	int findChar = Text_String.FindCharacter('e'); // Return the location of the character as an int. If not found, return -1
	std::cout << findChar << std::endl;
	int replaceChar = Text_String.Replace('e','k');
	
	
	//Text_String2.WriteToConsole();
}
