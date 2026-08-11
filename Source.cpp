#include <iostream>
#include <windows.h>
#include <cstdlib>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	short a;
	int b;
	long c;
	long long d;
	float e;
	double f;
	long double g;
	bool h;

	std::cout << "Short: " << &a << " " << sizeof(a) << std::endl;
	std::cout << "Int: " << &b << " " << sizeof(b) << std::endl;
	std::cout << "Long: " << &c << " " << sizeof(c) << std::endl;
	std::cout << "Long long: " << &d << " " << sizeof(d) << std::endl;
	std::cout << "Float: " << &e << " " << sizeof(e) << std::endl;
	std::cout << "Double: " << &f << " " << sizeof(f) << std::endl;
	std::cout << "Long double: " << &g << " " << sizeof(g) << std::endl;
	std::cout << "Bool: " << &h << " " << sizeof(h) << std::endl;
	return 0;
}
