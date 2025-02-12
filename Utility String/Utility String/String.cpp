#pragma once
#include <iostream>
#include "String.h"

String::String()
{
}

String::String(const char* _str)
{
	strcpy_s(text, _str);
}

String::String(const String& _other)
{
	strcpy_s(text, _other.text);
}

String::~String()
{
}

size_t String::Length() const {
		return strlen(text);
}

// String& String::ToUpper()

String& String::WriteToConsole()
{
	std::cout << text << std::endl;

	return *this;
}
