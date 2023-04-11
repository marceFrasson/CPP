#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define ARRAY_SIZE 200

int main( void )
{

	std::cout << "\n|  default value test  |\n" << std::endl;

	int *a = new int();

	std::cout << "Initialized value by default = " << *a << std::endl;

	std::cout << std::endl;

	/*
	**
	*/

	std::cout << "\n| assigning value test |\n" << std::endl;

	Array<int> numbers(ARRAY_SIZE);
	int *mirror = new int[ARRAY_SIZE];

	srand(time(NULL));
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		const int value = rand();

		numbers[i] = value;
		mirror[i] = value;
	}

	int equal = 1;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (mirror[i] != numbers[i])
		{
			equal = 0;
			std::cerr << "Didn't save the same value!" << std::endl;
			return (1);
		}
	}

	if (equal)
		std::cout << "The same values were saved!" << std::endl;
	
	std::cout << std::endl;

	/*
	**
	*/

	std::cout << "\n|    deep copy test    |\n" << std::endl;

	Array<int> temp = numbers;
	Array<int> test(temp);

	temp[0] = temp[0] + 1;
	
	if (temp[0] == numbers[0] || temp[0] == test[0])
		std::cout << "Deep copy fail!" << std::endl;
	else
		std::cout << "Deep copy successful!" << std::endl;

	std::cout << std::endl;

	/*
	**
	*/

	std::cout << "\n|   index bounds test  |\n" << std::endl;

	int arraySize = ARRAY_SIZE;

	try
	{
		std::cout << "\"numbers[arraySize-1] = 0\" => ";

		numbers[arraySize - 1] = 0;

		std::cout << "numbers[arraySize-1] = " << numbers[arraySize - 1] << std::endl;
	}
	catch (const std::exception &excep)
	{
		std::cerr << excep.what() << std::endl;
	}

	try
	{
		std::cout << "\"numbers[arraySize]   = 0\" => ";

		numbers[arraySize] = 0;

		std::cout << "numbers[arraySize] = " << numbers[arraySize] << std::endl;
	}
	catch (const std::exception &excep)
	{
		std::cerr << excep.what() << std::endl;
	}

	std::cout << std::endl;

	/*
	**
	*/

	std::cout << "\n|   operator [] test   |\n" << std::endl;

	for (int i = 0; i < ARRAY_SIZE; i++)
		numbers[i] = rand();
	
	int notEqual = 0;
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (mirror[i] == numbers[i])
			notEqual++;
	}

	if (notEqual != ARRAY_SIZE)
		std::cout << "Operator [] works!" << std::endl;
	else
		std::cout << "Operator [] doesn't work!" << std::endl;

	std::cout << std::endl;

	/*
	**
	*/

	std::cout << "\n|    char array test   |\n" << std::endl;

	std::cout << "Expected char array: a b c d e" << std::endl;

	Array<char> charArray(5);

	for (unsigned int i = 0; i < charArray.size(); i++)
	{
		try
		{
			charArray[i] = 'a' + i;
		}
		catch(const std::exception &excep)
		{
			std::cerr << excep.what() << std::endl;
		}
	}

	std::cout << "Assigned char array: ";

	for (unsigned int i = 0; i < charArray.size(); i++)
	{
		try
		{
			std::cout << charArray[i] << " ";
		}
		catch(const std::exception &excep)
		{
			std::cerr << excep.what() << std::endl;
		}
	}

	std::cout << std::endl << std::endl;

	/*
	**
	*/

	delete a;
	delete[] mirror;

	return (0);
	
}
