#include "Span.hpp"

int main()
{

	std::cout << std::endl;

	unsigned int	N = 10;
	
  {
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "numbers: 6, 3, 17, 9, 11";

    std::cout << std::endl << std::endl;

		std::cout << "Ctr unsigned int =      min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "Ctr unsigned int =      max interval: " << sp.longestSpan() << std::endl;
  }

	std::cout << std::endl;

	{
		Span sp = Span(N);
		std::vector<int> vec;

		int j = 1;

		std::cout << std::endl << "Numbers: ";

		for (unsigned int i = 0; i < N; i++)
		{
			std::cout << j;

      if (i < N - 1)
        std::cout << ", ";
        
			sp.addNumber(j);
			vec.push_back(j);
			
      j *= 2;
		}

		std::cout << std::endl << std::endl;

		std::cout << "Ctr unsigned int =      min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "Ctr unsigned int =      max interval: " << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		Span sp = Span(N);
		std::vector<int> vec;

		int j = 1;

		std::cout << std::endl << "Numbers: ";

		for (unsigned int i = 0; i < N; i++)
		{
			std::cout << j;

      if (i < N - 1)
        std::cout << ", ";
        
			sp.addNumber(j);
			vec.push_back(j);
			
      j *= 3;
		}

		std::cout << std::endl << std::endl;

		std::cout << "Ctr unsigned int =      min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "Ctr unsigned int =      max interval: " << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		Span sp = Span(N);
		std::vector<int> vec;

		int j = 1024;

		std::cout << std::endl << "Numbers: ";

		for (unsigned int i = 0; i < N; i++)
		{
			std::cout << j;

      if (i < N - 1)
        std::cout << ", ";
        
			sp.addNumber(j);
			vec.push_back(j);
			
      j /= -2;
		}

		std::cout << std::endl << std::endl;

		std::cout << "Ctr unsigned int =      min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "Ctr unsigned int =      max interval: " << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << std::endl;

	{
		Span sp = Span(10);

		try
		{
			std::cout << "try shortestSpan in Span(0): ";
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}

		try
		{
			std::cout << "try longestSpan in Span(0): ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}

		std::cout << std::endl;

		sp.addNumber(1);

		try
		{
			std::cout << "try shortestSpan in Span(1): ";
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}

		try
		{
			std::cout << "try longestSpan in Span(1): ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			std::cout << "try addNumber in full Span: ";

			for (unsigned int i = 0; i < 12; i++)
				sp.addNumber(i);

			std::cout << "Success" << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	{
		Span sp = Span(1000);

		for (unsigned int i = 0; i < 1000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}

		std::cout << std::endl << std::endl;

		std::cout << "Test with random Span(10000)" << std::endl << std::endl;

		std::cout << "min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "max interval: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(10000);

		for (unsigned int i = 0; i < 10000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}

		std::cout << std::endl << std::endl;

		std::cout << "Test with random Span(100000)" << std::endl << std::endl;

		std::cout << "min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "max interval: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(100000);

		for (unsigned int i = 0; i < 10000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}

		std::cout << std::endl << std::endl;

		std::cout << "Test with random Span(1000000)" << std::endl << std::endl;
    
		std::cout << "min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "max interval: " << sp.longestSpan() << std::endl;
	}

  std::cout << std::endl;

	return 0;

}