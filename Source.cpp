#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int number = 0;
	
	std::cout << "Введите целое цисло:" << std::endl;
	std::cin >> number;
	 
	for (int tab = 1; tab <= 10; tab = tab + 1 )
	{
		std::cout << number << " x " << tab << " = " << (number * tab) << std::endl;
	}


	return 0;
}
