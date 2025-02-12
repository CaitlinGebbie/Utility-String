#pragma once

class String {

public:
	char text[100];
	size_t length;

	String();
	String(const char* _str);
	String(const String& _other);

	~String();

public:
	size_t Length() const;

	String& Append(const String& _str);

	String& ToUpper();
	String& ToLower();

	int FindCharacter(const char _chr) const;

	int Replace(const char _find, const char _replace);

	String& ReadFromConsole() const;
	String& WriteToConsole();

};