#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);


	int array[10] = { 100,95,80,75,60,15,40,35,20,55};

	std::cout << "Массив: ";

	for (int i = 0; i < 10; i++)
	{

		std::cout << array[i];
		if (i < 9) 
		{
			std::cout << " ";
		}
	}
	std::cout << std::endl;

	int min = array[0];
	int max = array[0];

	for (int i = 0; i < 10; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] > max)
		{
			min = array[i];
		}
	}
	std::cout << "Минимальный элемент: " << min << std::endl;
	std::cout << "Максимальный элемент: " << max << std::endl;

	return 0;
}

