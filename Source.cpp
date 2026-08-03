#include <iostream>
#include <windows.h>
#include <cstdlib>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);


	int array[3][6];
	int min = array[0][0];
	int max = array[0][0];
	int minStr = 0; //строка минимального элемента
	int minStl = 0; //столбец минимального элемента
	int maxStr = 0; //строка максимального элемента
	int maxStl = 0; //столбец максимального элемента

	for (int i = 0; i < 3;i++)
	{
		for (int j=0;j<6;j++)
		{
			array[i][j] = rand() % 101;
		}
	}

	std::cout << "Массив: " << std::endl;

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 6;j++)
		{
			std::cout << array[i][j] << "\t";

			if (array[i][j] < min)
			{
				min = array[i][j];
				minStr = i;
				minStl = j;
				
			}

			if (array[i][j] > max)
			{
				max = array[i][j];
				maxStr = i;
				maxStl = j;
			}

			
		}
		std::cout << std::endl;
	}



	std::cout << "Индекс минимального элемента: " << minStr << ' ' << minStl << std::endl;
	std::cout << "Индекс максимального элемента: " << maxStr <<' ' << maxStl << std::endl;

	return 0;
}

