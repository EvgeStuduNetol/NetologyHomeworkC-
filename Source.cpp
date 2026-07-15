#include <iostream>
#include <string>

int main()
{
	std::string word;

	std::cout << "Enter a word: " << std::endl;
	std::cin >> word;
	std::cout << "\n";

	std::cout << "Your word: " << std::endl;
	std::cout << word << std::endl;

	return 0;
}