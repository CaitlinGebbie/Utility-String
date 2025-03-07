#include "String.h"

#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <ctime>

int main() {

	std::ofstream textLog{ "TestLog.txt", std::ios::app };
	time_t currentTime;
	time(&currentTime);

	textLog << "Starting test! Current date/time: " << ctime(&currentTime);

	float count = 0;
	
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
		textLog << "ToUpper Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "ToUpper Test = Fail\n";
	}

	std::cout << "Convert 'Worlds' to lowercase." << std::endl;
	Text_String2.ToLower();
	std::cout << "\n";

	if (Text_String2 == "worlds") {
		Text_String2.WriteToConsole();
		std::cout << "TESTING: PASSED\n\n";
		textLog << "ToLower Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "ToLower Test = Fail\n";
	}

	// LENGTH ------------------------------------------------------------------------------------------------------------
	
	std::cout << ">> Find the length of the string (not including the null termination character). <<" << std::endl;
	
	std::cout << "The length of 'Hello' is " << Text_String.Length() << std::endl; // Length of "Hello"

	if (Text_String.Length() == 5) {
		std::cout << "TESTING: PASSED\n\n";
		textLog << "Text_String Length Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "Text_String Length Test = Fail\n";
	}

	std::cout << "The length of 'Worlds' is " << Text_String2.Length() << std::endl; // Length of "Worlds"

	if (Text_String2.Length() == 6) {
		std::cout << "TESTING: PASSED\n\n";
		textLog << "Text_Sting2 Length Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "Text_String2 Length Test = Fail\n";
	}
	
	// APPEND ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Add the second string onto the first string. <<" << std::endl;
	Text_String.Append(Text_String2); // Adds "Worlds" to the end of "Hello"
	Text_String.WriteToConsole();
	std::cout << "\n";

	if (Text_String == "HELLOworlds") {
		std::cout << "TESTING: PASSED\n\n";
		textLog << "Append Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "Append Test = Fail\n";
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
		textLog << "FindCharacter Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "FindCharacter Test = Fail\n";
	}

	// SUBSCRIPT OPERATOR ([]) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Find the character located at the index. <<" << std::endl;

	std::cout << "Index 3 in 'helloworlds' is ";
	std::cout << Text_String.operator[](3); // This should find 'L'
	std::cout << "\n";

	if (Text_String.operator[](3) == 'l') {
		std::cout << "TESTING: PASSED\n\n";
		textLog << "operator[] Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "operator[] Test = Fail\n";
	}

	// ReplaceCharacter ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Replace all occurences of a character with another character. Return the number of replacements.\nFound = 1, Not Found = 0\n<<" << std::endl;

	std::cout << "Replace all 'l' with 'k'." << std::endl;

	Text_String.WriteToConsole();
	int replaceChar = Text_String.Replace('l', 'k'); // should be 3 'l' in HELLOworlds

	std::cout << "The amount of replacements: " << replaceChar << std::endl;
	Text_String.WriteToConsole();
	std::cout << "\n";

	if (replaceChar == 3) {
		std::cout << "TESTING: PASSED\n\n";
		textLog << "ReplaceCharacter Test = Pass\n";
		count = count + 1;
	}

	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "ReplaceCharacter Test = Fail\n";
	}

	// ReadFromConsole ------------------------------------------------------------------------------------------------------------

	std::cout << "Input your name. This will be stored in rhs." << std::endl;

	Text_String2.ReadFromConsole();
	Text_String2.WriteToConsole();
	std::cout << "\n";
	
	// EQUALITY OPERATOR (==) ------------------------------------------------------------------------------------------------------------

	std::cout << ">> Compare lhs and rhs. 1 for identical, 0 for different. <<" << std::endl;

	bool equalTo = false;
	bool equalTo2 = false;
	bool value = false;
	bool value2 = false;
	
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
		equalTo = true;
	}

		if (Same == 0) {
			std::cout << "VALUE TESTING: PASSED\n\n";
			value = true;
		}
		else {
			std::cout << "VALUE TESTING: FAILED\n\n";
		}

		if (equalTo == true && value == true) {
			textLog << "EqualTo Different Test = Pass\n";
			count = count + 1;
	}
		else {
			textLog << "EqualTo Different Test = Fail\n";
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
		equalTo2 = true;
	}
	else {
		std::cout << "These are different. (This shouldn't happen)\nTESTING: FAILED\n\n";
	}

		if (Same == 1) {
			std::cout << "VALUE TESTING: PASSED\n\n";
			value2 = true;
		}
		else {
			std::cout << "VALUE TESTING: FAILED\n\n";
		}

		if (equalTo2 == true && value2 == true) {
			textLog << "EqualTo Identical Test = Pass\n";
			count = count + 1;
		}
		else {
			textLog << "EqualTo Identical Test = Fail\n";
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
		textLog << "Operator(=) Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "TESTING: FAILED\n\n";
		textLog << "Operator(=) Test = Fail\n";
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
		textLog << "String Compare LessThan Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "lessThan TESTING: FAILED\n\n";
		textLog << "String Compare LessThan Test = Fail\n";
	}

	if (moreThan == false) {
		std::cout << "moreThan TESTING: PASSED\n\n";
		textLog << "String Compare MoreThan Test = Pass\n";
		count = count + 1;
	}
	else {
		std::cout << "moreThan TESTING: FAILED\n\n";
		textLog << "String Compare MoreThan Test = Fail\n";
	}

	if (lessThan == true && moreThan == false) {
		textLog << "String Compare Test = Pass\n";
		count = count + 1;
	}
	else {
		textLog << "String Compare Test = Fail\n";
	}

	float percentage = (count / 14) * 100;
	textLog << "Test Result: " << percentage << "% Passed!\n";
}
