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
		
	int length = strlen(text);
		
		for (int i = 0; i < strlen(text); i++) {
			putchar(toupper(text[i]));
		}
		return *this;
}

String& String::ToLower() { // Convert all characters to lowercase

	int length = strlen(text);

	for (int i = 0; i < length; i++) {
		putchar(tolower(text[i]));
		}
	return *this;
}

int String::FindCharacter(const char _chr) { // Return the location of the character as an int. If not found, return -1
	
	for (int i = 0; i < strlen(text); i++) {
		
		int checkChar = text[i];

		if (checkChar == text[1]) {
			std::cout << text[1] << std::endl;
		}

		if (checkChar == text['\0']) {
			return -1;
		}
	}
}

//int String::Replace(const char _find, const char _replace)
//{
//	//return *this;
//}


//String& String::ReadFromConsole() const
//{
//
//}

String& String::WriteToConsole()
{
	std::cout << text << std::endl;

	return *this;
}
