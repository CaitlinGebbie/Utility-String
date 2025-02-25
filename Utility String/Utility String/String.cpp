#include "String.h"

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

String::String() {
}

String::String(const char* _str) {
	strcpy_s(text, _str);

}

String::String(const String& _other) {
	strcpy_s(text, _other.text);
}

String::~String() {

	//delete[] text;

}

size_t String::Length() const { // Find the length of the string
	return strlen(text);
}

String& String::Append(const String& _str) { // Adds _str to the end of the string. Return by reference to *this.

	strcat_s(text, _str.text);
	return *this;
}

String& String::ToUpper() { // Convert all characters to uppercase

	for (int i = 0; i < String::Length(); i++) {
		putchar(toupper(text[i]));
	}
	return *this;
}

String& String::ToLower() { // Convert all characters to lowercase

	for (int i = 0; i < String::Length(); i++) {
		putchar(tolower(text[i]));
	}
	return *this;
}

int String::FindCharacter(const char _chr) {

	for (int i = 0; i < String::Length(); i++) {

		if (_chr == text[i]) {
			return i; // Return the location index of _chr
		}
	}
	return -1;
}

int String::Replace(const char _find, const char _replace) {

	int counter = 0;

	for (int i = 0; i < String::Length(); i++) {

		if (_find == text[i]) { // if 'o' is in 'Hello'

			text[i] = _replace; // 'o' is now 'k'
			counter++; // Add to counter
		}
	}
	return counter;
}

String& String::ReadFromConsole() {

	std::string readBuffer;
	std::getline(std::cin, readBuffer);

	Append(readBuffer.c_str());

	return *this;
}

String& String::WriteToConsole() {
	std::cout << text << std::endl;

	return *this;
}
//-------------------------------------------------------------------------------------------------------------

bool String::operator==(const String& _other) { // Returns true if each character in each string is identical.

	if (std::strcmp(text, _other.text) == 0) {
		std::cout << "Same" << std::endl;
		return true;
	}
	else
		std::cout << "Different" << std::endl;
	return false;
}

//char& String::operator[](size_t _index) { // Returns the character located at position n. If n is less than 0 or greater than the string length, return ‘\0’
//
//}
//
//const char& String::operator[](size_t _index) const {
//
//}
//
String& String::operator=(const String& _str) { // Replaces the characters in the lhs String with the characters in the rhs String.

	strcpy_s(text, _str.text);

	return *this;
}

bool String::operator<(const String& _str) { // Returns true if the lhs String comes before the rhs String alphabetically.

	if (String::Length() < _str.String::Length() && String::Length() == 0) {
		return true;
	}

	if (String::Length() > _str.String::Length() && _str.String::Length() == 0) {
		return false;
	}

	if (String::Length() == _str.String::Length() && String::Length() == 0) {
		return false;
	}
	return std::strcmp(text, _str.text) < 0;
}