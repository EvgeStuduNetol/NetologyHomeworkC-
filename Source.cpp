#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int number = 0;
	int sum = 0;

	do
	{
		std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
		std::cin >> number;

		sum = sum + number;
	} 
	
	while (number != 0);

	std::cout << "Сумма: " << sum << std::endl;

	return 0;
}
