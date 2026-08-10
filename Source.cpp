#include <iostream>
#include <windows.h>
#include <cstdlib>

int result (int value, int power)
{
	int step = 1;
	
	for (int i = 0; i < power; i++)
	{
		step *= value;
	}
	return step;
}

int main(int argc, char** argv)
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int value = 5, power = 2;
	std::cout << value << " в степени " << power << " = " << result(value, power) << std::endl;

	value = 3;
	power = 3;
	std::cout << value << " в степени " << power << " = " << result(value, power) << std::endl;

	value = 4;
	power = 4;
	std::cout << value << " в степени " << power << " = " << result(value, power) << std::endl;

	return 0;
}