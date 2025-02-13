#include "String.h"

#include <iostream>
#include <string>
#include <cctype>

int main() {
	 
	String Text_String;

	Text_String = "Testing";
	//String text2 = text;

	Text_String.WriteToConsole();
	std::cout << Text_String.Length() << std::endl;
	Text_String.ToUpper();
	Text_String.ToLower();
	/*std::cout << text.ToUpper() << std::endl;*/
	//text2.WriteToConsole();
}
