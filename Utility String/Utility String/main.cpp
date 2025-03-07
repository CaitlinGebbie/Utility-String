#include "String.h"

#include <iostream>
#include <string>
#include <cctype>

int main() {

	String Text_String = "Hello";
	String Text_String2 = "Worlds";

	// TOUPPER & TOLOWER ------------------------------------------------------------------------------------------------------------

	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";

	std::cout << "Convert 'Hello' to uppercase." << std::endl;
	Text_String.ToUpper();
	std::cout << "\n";

	if (Text_String == "HELLO") {
		Text_String.WriteToConsole();
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}

	std::cout << "Convert 'Worlds' to lowercase." << std::endl;
	Text_String2.ToLower();
	std::cout << "\n";

	if (Text_String2 == "worlds") {
		Text_String2.WriteToConsole();
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}

	// LENGTH ------------------------------------------------------------------------------------------------------------
	
	std::cout << ">> Find the length of the string (not including the null termination character). <<" << std::endl;
	
	std::cout << "The length of 'Hello' is " << Text_String.Length() << std::endl; // Length of "Hello"

	if (Text_String.Length() == 5) {
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}

	std::cout << "The length of 'Worlds' is " << Text_String2.Length() << std::endl; // Length of "Worlds"

	if (Text_String2.Length() == 6) {
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}
	
	// APPEND ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Add the second string onto the first string. <<" << std::endl;
	Text_String.Append(Text_String2); // Adds "Worlds" to the end of "Hello"
	Text_String.WriteToConsole();
	std::cout << "\n";

	if (Text_String == "HELLOworlds") {
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}

	// ToLower ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Convert all characters to lowercase. <<" << std::endl;
	Text_String.ToLower(); // Convert all characters to uppercase
	Text_String.WriteToConsole();
	std::cout << "\n";

	// FindCharacter ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Return the location of the character as an int. If not found, return -1. <<" << std::endl;
	std::cout << "Find index at char 'o' in 'helloworlds'." << std::endl;

	if (Text_String.FindCharacter('o') == 4) {
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}

	// SUBSCRIPT OPERATOR ([]) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Find the character located at the index. <<" << std::endl;

	std::cout << "Index 3 in 'helloworlds' is ";
	std::cout << Text_String.operator[](3); // This should find 'L'
	std::cout << "\n";

	if (Text_String.operator[](3) == 'l') {
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}

	// ReplaceCharacter ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Replace all occurences of a character with another character. Return the number of replacements.\nFound = 1, Not Found = 0\n<<" << std::endl;

	std::cout << "Replace all 'l' with 'k'." << std::endl;

	Text_String.WriteToConsole();
	int replaceChar = Text_String.Replace('l', 'k'); // should be 3 'l' in HELLOworlds

	std::cout << "The amount of replacements: " << replaceChar << std::endl;
	Text_String.WriteToConsole();
	std::cout << "\n";

	if (replaceChar == 3)
		std::cout << "TESTING: PASSED\n\n";

	else {
		std::cout << "TESTING: FAILED\n\n";
	}

	// ReadFromConsole ------------------------------------------------------------------------------------------------------------

	std::cout << "Input your name. This will be stored in rhs." << std::endl;

	Text_String2.ReadFromConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";
	
	// EQUALITY OPERATOR (==) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Compare lhs and rhs. 1 for identical, 0 for different. <<" << std::endl;
	
	Text_String = "Test";
	Text_String2 = "Testing";
	std::cout << "\n";

	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();

	bool Same = Text_String.operator==(Text_String2); // Checks if lhs and rhs are the same or different
	std::cout << "Result: " << Same << std::endl;
	std::cout << "\n";

	if (Text_String == Text_String2) {
		
		std::cout << "These are identical. (This shouldn't happen)\nTESTING: FAILED\n\n";
	}

	else {
		std::cout << "These are different. Result should show 0.\nTESTING: PASSED\n\n";
	}

		if (Same == 0) {
			std::cout << "VALUE TESTING: PASSED\n\n";
		}
		else {
			std::cout << "VALUE TESTING: FAILED\n\n";
		}

	Text_String = "Test";
	Text_String2 = "Test";

	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();

	Same = Text_String.operator==(Text_String2); // Checks if lhs and rhs are the same or different
	std::cout << "Result: " << Same << std::endl;
	std::cout << "\n";

	if (Text_String == Text_String2) {
		std::cout << "These are identical. Result should show 1.\nTESTING: PASSED\n\n";
	}
	else {
		std::cout << "These are different. (This shouldn't happen)\nTESTING: PASSED\n\n";
	}

		if (Same == 1) {
			std::cout << "VALUE TESTING: PASSED\n\n";
		}
		else {
			std::cout << "VALUE TESTING: FAILED\n\n";
		}

	// ASSIGNMENT OPERATOR (=) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Replace the characters in lhs with rhs. <<" << std::endl;

	Text_String = "Hello";
	Text_String2 = "Worlds";

	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";

	std::cout << "lhs = rhs: ";
	Text_String.operator=(Text_String2);

	Text_String.WriteToConsole();
	std::cout << "\n";

	if (Text_String == "Worlds") {
		std::cout << "TESTING: PASSED\n\n";
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
	}
	
	// LessThan OPERATOR (<) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Return true if lhs comes before rhs alphabetically. <<" << std::endl;
	
	Text_String = "Hello";

	Text_String.WriteToConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";
	
	bool lessThan = Text_String.operator<(Text_String2);
	std::cout << "lhs is : " << lessThan << std::endl;
	std::cout << "\n";
	bool moreThan = Text_String2.operator<(Text_String);
	std::cout << "rhs is : " << moreThan << std::endl;
	std::cout << "\n";

	if (lessThan == true) {
		std::cout << "lessThan TESTING: PASSED\n\n";
	}
	else {
		std::cout << "lessThan TESTING: FAILED\n\n";
	}

	if (moreThan == false) {
		std::cout << "moreThan TESTING: PASSED\n\n";
	}
	else {
		std::cout << "moreThan TESTING: FAILED\n\n";
	}

}