#include "String.h"

#include <iostream>
#include <string>
#include <cctype>

int main() {
	 
	String Text_String;

	Text_String = "Hello";
	//String text2 = "World";

	Text_String.WriteToConsole();
	std::cout << Text_String.Length() << std::endl; // Find the length of the string
	Text_String.ToUpper(); // Convert all characters to uppercase
	std::cout << "\n";
	Text_String.ToLower(); // Convert all characters to lowercase
	std::cout << "\n";
	Text_String.FindCharacter('E'); // Return the location of the character as an int. If not found, return -1
	
	
	
	
	
	/*std::cout << text.ToUpper() << std::endl;*/
	//text2.WriteToConsole();
}
