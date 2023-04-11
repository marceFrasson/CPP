#include "iter.hpp"

int main( void )
{

	{
		int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int length = sizeof(array) / sizeof(array[0]);

		std::cout << std::endl << "Int   array: ";

		iter(array, length, printElement<int>);

		std::cout << std::endl;
	}

	{
		float array[] = {1.4, 3.2, 5.9, 7.8, 9, 10};
		int length = sizeof(array) / sizeof(array[0]);

		std::cout << std::endl << "Float array: ";

		iter(array, length, printElement<float>);

  		std::cout << std::endl;
	}

	{
		char array[] = {'z', 'e', 'g', 'r', 't', 'u', 'y', 'l', 'a', 'q', 'i'};
		int length = sizeof(array) / sizeof(array[0]);

		std::cout << std::endl << "Char  array: ";

		iter(array, length, printElement<char>);

  		std::cout << std::endl << std::endl;
	}

  return (0);

}
