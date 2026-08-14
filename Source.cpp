#include <iostream>
#include <windows.h>
#include <cstdlib>

void counting_function()
{
	static int score = 0;
	score++;
	std::cout << "Количество вызовов функции counting_function() : " << score << std::endl;

}

int main(int argc, char** argv)
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	
		for (int i = 0; i < 15; i++)
		{
			counting_function();
		}
	
}
