#include <iostream>
#include <windows.h>
#include <cstdlib>

namespace S
{
	int calc(int x, int y)
	{
		return x + y;
	}
}

namespace V
{
	int calc(int x, int y)
	{
		return x - y;
	}
}

namespace U
{
	int calc(int x, int y)
	{
		return x * y;
	}
}

namespace D
{
	int calc(int x, int y)
	{
		return x / y;
	}
}

int main(int argc, char** argv)
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int x = 6, y = 9;

	std::cout << "Сложение: " << S::calc(x, y) << std::endl;
	std::cout << "Вычитание: " << V::calc(x, y) << std::endl;
	std::cout << "Умножение: " << U::calc(x, y) << std::endl;
	std::cout << "Деление: " << D::calc(x, y) << std::endl;
	
	return 0;
	
}
