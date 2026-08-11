#include <iostream>
#include <windows.h>
#include <cstdlib>

void swap(int& a, int& b) 
{
	int c = a;
	a = b;
	b = c;
}

int main(int argc, char** argv)
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
