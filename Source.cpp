#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int number = 0;
	int sum = 0;

	std::cout << "Введите целое число:" << std::endl;
	std::cin >> number;

	while (number != 0) 
	{
		sum = sum + number % 10;
		number = number / 10;
	}
	std::cout << "Сумма цифр: " << sum << std::endl;

	return 0;
}
