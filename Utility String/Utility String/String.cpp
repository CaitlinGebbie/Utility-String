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
	return length;

}

String& String::Append(const String& _str) { // Adds _str to the end of the string. Return by reference to *this.

	size_t newLength = length + _str.length; // newLength is text.length + _str.length
	char* newText = new char[newLength + 1];

	if (text != nullptr && length > 0) {

		strcpy(newText, text); // length of newText now contains text

	}
	else {
		newText[0] = '\0'; // if newText contains nothing, make it null
	}

	strcat(newText, _str.text); // newText + _str.text

	length = newLength; // text.length = text.length + _str.length

	delete[] text;
	text = newText;

	return *this;
}

String& String::ToUpper() { // Convert all characters to uppercase

	for (int i = 0; i < length; i++) {

		if (text[i] >= 97 && text[i] <= 122) { // if text[i] is in between 'a' to 'z' on the ASCII table
			text[i] = text[i] - 32; // - 32 to every lowercase ASCII decimal
		}
	}
	return *this;
}

String& String::ToLower() { // Convert all characters to lowercase

	for (int i = 0; i < length; i++) {

		if (text[i] >= 41 && text[i] <= 90) { // if text[i] is in between 'A' to 'Z' on the ASCII table
			text[i] = text[i] + 32; // + 32 to every lowercase ASCII decimal
		}
	}
	return *this;
}

int String::FindCharacter(const char _chr) const {

	for (int i = 0; i < length; i++) {


		if (_chr == text[i]) { // if _chr is in text[i], return the first i it finds

			std::cout << "The " << text[4] << " is found at " << i << "\n";
			return i;
		}
		else if (_chr != text[i]) {

		}
	}
	return -1;
}

int String::Replace(const char _find, const char _replace) {

	int counter = 0;

	for (int i = 0; i < length; i++) {

		if (_find == text[i]) { // if _find is in 'Hello'

			text[i] = _replace; // _find is now _replace
			counter++; // Add to counter
		}

		else if (_find != text[i]) {

		}
	}
	return counter;
}

String& String::ReadFromConsole() { // store the input to string

	std::string readText; // init readText
	std::getline(std::cin, readText); // cin = readText

	size_t newLength = readText.length(); // newLength is length of readtext
	char* newText = new char[newLength + 1]; // newText is the length of readText + 1 for null

	strcpy(newText, readText.c_str()); // Store readText into newText (Converts readText into a char array)

	length = newLength;

	delete[] text;
	text = newText;

	return *this;
}

String& String::WriteToConsole() {
	std::cout << text << std::endl;

	return *this;
}
//-------------------------------------------------------------------------------------------------------------

bool String::operator==(const String& _other) const { // Returns true if each character in each string is identical.
	if (strcmp(text, _other.text) == 0) {
		return true;
	}
	else {
		return false;
	}
}

char& String::operator[](size_t _index) {

	if (_index <= length) {
		return text[_index];
	}
	else {
		return text[length];
	}
}

const char& String::operator[](size_t _index) const { // Returns the character located at position _index. If _index is less than 0 or greater than the string length, return ‘\0’

	if (_index <= length) {
		return text[_index];
	}
	else {
		return text[length];
	}
}

String& String::operator=(const String& _str) { // Replaces the characters in the lhs String with the characters in the rhs String.

	size_t newLength = _str.length; // newLength is the length of _str
	char* rhsText = new char[newLength + 1]; // rhsText is the length of _str + null

	strcpy(rhsText, _str.text); // this should copy the contents of rhs to lhs

	length = newLength;

	delete[] text;
	text = rhsText;

	return *this;
}

bool String::operator<(const String& _str) const {

	if (strcmp(text, _str.text) < 0) {
		return true;
	}
	else {
		return false;
	}
}