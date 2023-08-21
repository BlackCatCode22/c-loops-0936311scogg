// stringsAndLoops.cpp
// Benjamin Scoggins
// 21 August 2023

#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello. Welcome to this very cool strings and loops program." << std::endl;

	std::string megaString = "The five boxing wizards jump quickly.";
	std::cout << "The test string is: " << megaString << std::endl;

	// Index using .find()
	std::cout << "\nFind index of \"wizards\": " << megaString.find("wizards", 0) << std::endl;
	// using .substr()
	std::cout << "Substr \"boxing\": " << megaString.substr(9, 6)  << std::endl;
	// .at()
	std::cout << "At index 7: " << megaString.at(7) << std::endl;
	// .length()
	std::cout << "Length: " << megaString.length() << std::endl;
	// .size()
	std::cout << "Size: " << megaString.size() << std::endl;
	
	// .empty()
	std::cout << "Is empty: " << megaString.empty() << std::endl;
	// .clear() and .empty()
	megaString.clear();
	std::cout << "Is empty after .clear(): " << megaString.empty() << std::endl;


	return 0;
}
