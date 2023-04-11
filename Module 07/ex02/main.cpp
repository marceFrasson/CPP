#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define MAX_VAL 750

int main( void )
{

	std::cout << std::endl;

	int *a = new int();

	std::cout << "Element initialized by default = " << *a << std::endl;

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

	Array<int> temp = numbers;
	Array<int> test(temp);

	temp[0] = temp[0] + 1;
	
	if (temp[0] == numbers[0] || temp[0] == test[0])
		std::cout << "Deep copy fail!" << std::endl;
	else
		std::cout << "Deep copy successful!" << std::endl;

	std::cout << std::endl;

	int equal = 1;

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			equal = 0;
			std::cerr << "Didn't save the same value!" << std::endl;
			return 1;
		}
	}

	if (equal)
		std::cout << "The same values were saved!" << std::endl;
	
	std::cout << std::endl;

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
		numbers[i] = rand();
	
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

	std::cout << std::endl;

	delete a;
	delete[] mirror;

	return (0);
	
}