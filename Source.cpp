#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);


	int array[10] = { 1,2,3,4,5,6,7,8,9,11 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i];
		if (i < 9) 
		{
			std::cout << ", ";
		}
	}

	return 0;
}
