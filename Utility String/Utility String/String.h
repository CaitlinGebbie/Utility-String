#pragma once

class String {

public:
	char text[50];
	size_t length;

	String();
	String(const char* _str);
	String(const String& _other);

	~String();

public:
	size_t Length() const; // Returns an integer representing the count of characters up to, but not including, the null termination character.

	String& Append(const String& _str); // Adds str to the end of the string.

	String& ToUpper(); // Convert all characters to uppercase.
	String& ToLower(); // Convert all characters to lowercase.

	int FindCharacter(const char _chr); // Returns the location of the character as an int. If not found, return -1.

	int Replace(const char _find, const char _replace); // Replaces all occurrences of findCharacter with replaceCharacter. Returns the number of replacements.

	String& ReadFromConsole(); // Wait for input in the console window and store the result in the string.
	String& WriteToConsole(); // Write the string to the console window.

	bool operator==(const String& _other); // Returns true if each character in each string is identical.

	const char& operator[](size_t _index) const;

	String& operator=(const String& _str);
	bool operator<(const String& _str);
};