#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define MAX_VAL 750

int main(int, char **)
{

	std::cout << std::endl;

	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		tmp[0] = tmp[0] + 1;
		if (tmp[0] == test[0])
			std::cout << "deep copy fail!" << std::endl;
		else
			std::cout << "deep copy successful!" << std::endl;
	}

	std::cout << std::endl;

	{
		int equal = 1;
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				equal = 0;
				std::cerr << "didn't save the same value!" << std::endl;
				return 1;
			}
		}
		if (equal)
			std::cout << "the same values were saved!" << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		std::cout << "\"numbers[-2] = 0;\" => ";

		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "\"numbers[MAX_VAL] = 0;\" => ";

		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	
	{
		int notEqual = 0;
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] == numbers[i])
				notEqual++;
		}
		if (notEqual != MAX_VAL)
			std::cout << "operator [] works!" << std::endl;
		else
			std::cout << "operator [] doesn't work!" << std::endl;
	}

	delete[] mirror;

	std::cout << std::endl;

	return (0);
}