#include <iostream>
#include <string>
#include <Windows.h>
// На моем Visual studio так и не хочет писаться на русском языке
int main()
{
	std::cout << std::boolalpha;
	std::cout << "Operator: ||" << std::endl;
	
	bool a = true, b = true;	
	std::cout << a << " " << b << " " << (a || b) << std::endl;

	a = false, b = true;
	std::cout << a << " " << b << " " << (a || b) << std::endl;

	a = true, b = false;
	std::cout << a << " " << b << " " << (a || b) << std::endl;

	a = false, b = false;
	std::cout << a << " " << b << " " << (a || b) << std::endl;
	std::cout << "\n";

	std::cout << "Operator: &&" << std::endl;

	a = true, b = true;
	std::cout << a << " " << b << " " << (a && b) << std::endl;

	a = false, b = true;
	std::cout << a << " " << b << " " << (a && b) << std::endl;

	a = true, b = false;
	std::cout << a << " " << b << " " << (a && b) << std::endl;

	a = false, b = false;
	std::cout << a << " " << b << " " << (a && b) << std::endl;

	return 0;
}
