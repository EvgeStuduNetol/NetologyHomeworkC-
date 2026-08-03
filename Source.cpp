#include <iostream>
#include <windows.h>
#include <cstdlib>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int array[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 101;	
	}

	std::cout << "Массив до сортировки: ";
	for (int i = 0; i < 10;i++)
	{
			std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Массив после сортировки: ";
	for (int k = 0; k < 9; k++)
	{
		int swap_counter = 0;
		for (int i = 0; i < 9 - k; i++)
		{
			if (array[i] < array[i + 1])
			{
				std::swap(array[i], array[i + 1]);
				swap_counter++;
			}
		}
		if (swap_counter == 0) 
		{
			break;
		}
	}

	for (int i = 0; i < 10;i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}

