#pragma once
#include "String.h"
#include <iostream>
#include <cctype>

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

size_t String::Length() const {
		return strlen(text);
}

//String& String::Append(const String& _str)
//{
// if (sizeof(
//}

String& String::ToUpper() {
		
	int length = strlen(text);
		
		for (int i = 0; i < length; i++) {

			if (text[i] > 90) {
				char Upper_Array = toupper(text[i]); 

				std::cout << Upper_Array;
			}
		}
		return *this;
}

String& String::ToLower() {

	int length = strlen(text);

	for (int i = 0; i < length; i++) {
		if (text[i] < 64) {
			char Lower_Array = tolower(text[i]);

			std::cout << Lower_Array;
		}
	}
	return *this;
}

int String::FindCharacter(const char _chr) const
{
	return 0;
}

int String::Replace(const char _find, const char _replace)
{
	return 0;
}


//String& String::ReadFromConsole() const
//{
//
//}

String& String::WriteToConsole()
{
	std::cout << text << std::endl;

	return *this;
}
