#pragma once

#include <cstddef>

class String {

private:
	char* text; // text is a memory address
	size_t length;

	
public:
	String();
	String(const char* _str);
	String(const String& _other);

	~String();

	// Returns an integer representing the count of characters up to, but not including, the null termination character.
	size_t Length() const;

	// Adds str to the end of the string.
	String& Append(const String& _str);

	// Convert all characters to uppercase.
	String& ToUpper(); // Convert all characters to uppercase.
	// Convert all characters to lowercase.
	String& ToLower();

	// Returns the location of the character as an int. If not found, return -1.
	int FindCharacter(const char _chr) const;

	// Replaces all occurrences of findCharacter with replaceCharacter. Returns the number of replacements.
	int Replace(const char _find, const char _replace);

	// Wait for input in the console window and store the result in the string.
	String& ReadFromConsole();
	// Write the string to the console window.
	String& WriteToConsole();

	// Returns true if each character in each string is identical.
	bool operator==(const String& _other) const;
	// Returns the character located at position _index. If _index is less than 0 or greater than the string length, return ‘\0’
	char& operator[](size_t _index);
	// Returns the character located at position _index. If _index is less than 0 or greater than the string length, return ‘\0’
	const char& operator[](size_t _index) const;
	// Replaces the characters in the lhs String with the characters in the rhs String.
	String& operator=(const String& _str);
	// Returns true if the lhs String comes before the rhs String alphabetically.
	bool operator<(const String& _str) const;
};