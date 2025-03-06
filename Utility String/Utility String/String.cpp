#include "String.h"

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

String::String() {
	text = new char[1] {};

	length = 0;
}

String::String(const char* _str) {
	length = strlen(_str);

	text = new char[length + 1];

	strcpy(text, _str);
}

String::String(const String& _other) {
	length = _other.length;

	text = new char[length + 1];

	strcpy(text, _other.text);
}

String::~String() {
	delete[] text;
}

size_t String::Length() const { // Find the length of the string
	return strlen(text);
}

String& String::Append(const String& _str) { // Adds _str to the end of the string. Return by reference to *this.

	size_t newLength = length + _str.length;
	char* newText = new char[newLength + 1]; // assigns newLength + 1 to the memory address of newText

	if (text != nullptr && length > 0) {

		strcpy(newText, text);

	}
	else {
		newText[0] = '\0';
	}

	strcat(newText, _str.text);

	length = newLength;

	delete[] text;
	text = newText;

	return *this;
}

String& String::ToUpper() { // Convert all characters to uppercase

	for (int i = 0; i < String::Length(); i++) { 

		if (text[i] >= 97 && text[i] <= 122) {
			text[i] = text[i] - 32;
		}
	}
	return *this;
}

String& String::ToLower() { // Convert all characters to lowercase

	for (int i = 0; i < String::Length(); i++) {

		if (text[i] >= 41 && text[i] <= 90) {
			text[i] = text[i] + 32;
		}
	}
	return *this;
}

int String::FindCharacter(const char _chr) {

	for (int i = 0; i < String::Length(); i++) {

		if (_chr == text[i]) {
			return i;
		}
	}
	return -1;
}

int String::Replace(const char _find, const char _replace) {

	int counter = 0;

	for (int i = 0; i < String::Length(); i++) {

		if (_find == text[i]) { // if 'l' is in 'Hello'

			text[i] = _replace; // 'l' is now 'k'
			counter++; // Add to counter
		}
	}
	return counter;
}

String& String::ReadFromConsole() {

	char* newText = new char[length + 1];

	std::string readText;
	std::getline(std::cin, readText);

	strcpy(newText, readText.c_str()); // Store readText into newText (Converts readText into a char array)

	delete[] text;
	text = newText;

	return *this;
}

String& String::WriteToConsole() {
	std::cout << text << std::endl;

	return *this;
}
//-------------------------------------------------------------------------------------------------------------

bool String::operator==(const String& _other) { // Returns true if each character in each string is identical.

	if (strcmp(text, _other.text) == 0) {
		//std::cout << "Same" << std::endl;
		return true;
	}
	else
		//std::cout << "Different" << std::endl;
	return false;
}

const char& String::operator[](size_t _index) const { // Returns the character located at position _index. If _index is less than 0 or greater than the string length, return ‘\0’


	for (int i = 0; i < String::Length(); i++) {

		if (_index < 0 || _index > String::Length()) {
			std::cout << "This doesn't work" << std::endl;
			return '\0';
		}
		else
			i = _index;
		std::cout << text[i] << std::endl;
		return text[i];
	}
}

String& String::operator=(const String& _str) { // Replaces the characters in the lhs String with the characters in the rhs String.

	size_t newLength = length + _str.length;
	char* rhsText = new char[newLength + 1];

	if (text != nullptr && length > 0) {

		strcpy(rhsText, _str.text);

	}
	else {
		rhsText[0] = '\0';
	}

	length = newLength;

	delete[] text;
	text = rhsText;

	return *this;
}

bool String::operator<(const String& _str) { // Returns true if the lhs String comes before the rhs String alphabetically.

	if (strcmp(text, _str.text) < 0) {
		return true;
	}
	else if (strcmp(text, _str.text) > 0) {
		return false;
	}
	else if (strcmp(text, _str.text) == 0) {
		return false;
	}
}