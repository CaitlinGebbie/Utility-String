#include "String.h"

#include <iostream>
#include <cctype>
#include <cstring>

String::String() {
}

String::String(const char* _str) {
	strcpy_s(text, _str);

}

String::String(const String& _other) {
	strcpy_s(text, _other.text);
}

String::~String() {

}

size_t String::Length() const { // Find the length of the string
		return strlen(text);
}

//String& String::Append(const String& _str)
//{
// if (sizeof(
//}

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

<<<<<<< HEAD
int String::FindCharacter(const char _chr) { // Return the location of the character as an int. If not found, return -1
	
	for (int i = 0; i < strlen(text); i++) {
		
		int checkChar = text[i];
=======
int String::FindCharacter(const char _chr) {
>>>>>>> f79a72406bfdfeccf2a6d7bf98a9a0e089268987

	for (int i = 0; i < String::Length(); i++) {

<<<<<<< HEAD
		if (checkChar == text['\0']) {
			return -1;
=======
		if (_chr == text[i]) {
			std::cout << "Finding index " << i << " in the array." << std::endl;
			return i;
>>>>>>> f79a72406bfdfeccf2a6d7bf98a9a0e089268987
		}
	}
	return -1;
}

int String::Replace(const char _find, const char _replace) { // Replaces all occurrences of findCharacter with replaceCharacter. Returns the number of replacements.
		
	int charIndex;
	int counter = 0;

	for (int i = 0; i < String::Length(); i++) {

		if (_find == text[i]) { // if 'e' is in 'Hello'

			charIndex = i; // charIndex is now the location of 'e'
			i = _replace; // index of 'e' is now 'k'
			counter =
		}
		return counter;
	}
}


//String& String::ReadFromConsole() const
//{
//
//}

String& String::WriteToConsole() {
	std::cout << text << std::endl;

	return *this;
}
//for (int i = 0; i < String::Length(); i++) {
//
//	charIndex = _replace; // charIndex is 'k'
//}
//
//for (int i = 0; i < String::Length(); i++) {
//
//	if (charIndex == text[i]) { // if 'k' is in text[i]
//
//		//replaceCounter = 