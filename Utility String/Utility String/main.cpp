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

	std::cout << "Convert 'Hello' to uppercase." << std::endl;
	Text_String.ToUpper();
	Text_String.WriteToConsole();
	std::cout << "\n";

	std::cout << "Convert 'Worlds' to lowercase." << std::endl;
	Text_String2.ToLower();
	Text_String2.WriteToConsole();
	std::cout << "\n";

	// LENGTH ------------------------------------------------------------------------------------------------------------
	
	std::cout << ">> Find the length of the string (not including the null termination character). <<" << std::endl;

	std::cout << "The length of 'Hello' is " << Text_String.Length() << std::endl; // Length of "Hello"
	std::cout << "The length of 'Worlds' is " << Text_String2.Length() << std::endl; // Length of "Worlds"
	std::cout << "\n";
	
	// APPEND ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Add the second string onto the first string. <<" << std::endl;
	Text_String.Append(Text_String2); // Adds "Worlds" to the end of "Hello"
	Text_String.WriteToConsole();
	std::cout << "\n";
	
	std::cout << "The new length of the string is " << Text_String.Length() << std::endl; // Find the length of "Hello Worlds"
	std::cout << "\n";

	// ToUpper ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Convert all characters to uppercase. <<" << std::endl;
	Text_String.ToUpper(); // Convert all characters to uppercase 
	Text_String.WriteToConsole();
	std::cout << "\n";

	// ToLower ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Convert all characters to lowercase. <<" << std::endl;
	Text_String.ToLower(); // Convert all characters to uppercase
	Text_String.WriteToConsole();
	std::cout << "\n";

	// FindCharacter ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Return the location of the character as an int. If not found, return -1. <<" << std::endl;
	std::cout << "Find index at char 'o' in 'helloworlds'." << std::endl;
	int findChar = Text_String.FindCharacter('o');
	std::cout << "Index found: " << findChar << std::endl;
	std::cout << "\n";

	std::cout << "Find index at char 'r' in 'helloworlds'." << std::endl;
	findChar = Text_String.FindCharacter('r');
	std::cout << "Index found: " << findChar << std::endl;
	std::cout << "\n";

	std::cout << "Find index at char 'g' in 'helloworlds'." << std::endl;
	findChar = Text_String2.FindCharacter('g');
	std::cout << "Index found: " << findChar << std::endl;
	std::cout << "\n";

	// SUBSCRIPT OPERATOR ([]) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Find the character located at the index. <<" << std::endl;

	std::cout << "Index 0 in 'helloworlds' is ";
	Text_String.operator[](0);// This should find 'h'
	std::cout << "Index 3 in 'helloworlds' is ";
	Text_String2.operator[](3); // This should find 'l'
	std::cout << "Index 4 in 'helloworlds' is ";
	Text_String2.operator[](4); // This should find 'd'
	std::cout << "\n";

	// ReplaceCharacter ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Replace all occurences of a character with another character. Return the number of replacements. <<" << std::endl;
	std::cout << "\n";

	std::cout << "Replace all 'l' with 'k'." << std::endl;

	Text_String.WriteToConsole();
	int replaceChar = Text_String.Replace('l', 'k');
	std::cout << "The amount of replacements: " << replaceChar << std::endl;
	Text_String.WriteToConsole();
	std::cout << "\n";

	// ReadFromConsole ------------------------------------------------------------------------------------------------------------

	std::cout << "Input your name. This will be stored in rhs and appended to lhs." << std::endl;
	Text_String2.ReadFromConsole();
	Text_String.Append(Text_String2);
	Text_String.WriteToConsole();
	std::cout << "\n";
	
	// EQUALITY OPERATOR (==) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Compare lhs and rhs. 1 for identical, 0 for different. <<" << std::endl;
	
	bool Same = Text_String.operator==(Text_String2); // Checks if lhs and rhs are the same or different
	std::cout << "Result: " << Same << std::endl;
	std::cout << "\n";

	// ReadFromConsole 2 ------------------------------------------------------------------------------------------------------------

	std::cout << "Input another name. This will be stored in lhs." << std::endl;
	Text_String.ReadFromConsole();
	std::cout << "\n";
	std::cout << "The new lhs is: ";
	Text_String.WriteToConsole();
	std::cout << "\n";

	std::cout << "Input something for rhs." << std::endl;
	Text_String2.ReadFromConsole();
	std::cout << "\n";
	std::cout << "The new rhs is: ";
	Text_String2.WriteToConsole();
	std::cout << "\n";

	// ASSIGNMENT OPERATOR (=) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Replace the characters in lhs with rhs. <<" << std::endl;

	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";

	std::cout << "lhs = rhs: ";
	Text_String.operator=(Text_String2);

	Text_String.WriteToConsole();
	std::cout << "\n";

	// ReadFromConsole 3 ------------------------------------------------------------------------------------------------------------

	std::cout << "Input an animal name." << std::endl;
	Text_String2.ReadFromConsole();
	std::cout << "\n";
	std::cout << "The new rhs is: ";
	Text_String2.WriteToConsole();
	std::cout << "\n";
	
	// LessThan OPERATOR (<) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Return true if lhs comes before rhs alphabetically. <<" << std::endl;
	
	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";
	
	bool lessThan = Text_String.operator<(Text_String2);
	std::cout << "lhs is : " << lessThan << std::endl;
	std::cout << "\n";
	lessThan = Text_String2.operator<(Text_String);
	std::cout << "rhs is : " << lessThan << std::endl;
	std::cout << "\n";

	//------------------------------------------------------------------------------------------------------------

	std::cout << ">> Final test: Compare lhs and rhs. Return true if they are the same. <<" << std::endl;

	Text_String = "Hello";
	Text_String2 = "Hello";

	std::cout << "lhs is : ";
	Text_String.WriteToConsole();
	std::cout << "rhs is : ";
	Text_String2.WriteToConsole();

	Same = Text_String.operator==(Text_String2); // Checks if lhs and rhs are the same or different
	std::cout << "Result: " << Same << std::endl;
	std::cout << "\n";
}