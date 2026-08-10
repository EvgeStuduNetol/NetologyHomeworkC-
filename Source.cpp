#include <iostream>
#include <windows.h>
#include <cstdlib>

int result(int a)
{
	if (a == 0)
	{
		return 0;
	}

	if (a == 1) 
	{
		return 1;
	}
	return result(a - 1) + result(a - 2);
}

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int a;

	std::cout << "Введите число: ";
	std::cin >> a;
	std::cout << std::endl;

	std::cout << "Числа Фибоначчи : ";
	for (int i = 0;i < a; i++) 
	{
		std::cout << result(i) << " ";
	}
	std::cout << std::endl;

	return 0;
}
