#include "Span.hpp"

int main()
{

	std::cout << std::endl;

	unsigned int N = 10;
	
  {
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Numbers: 6, 3, 17, 9, 11";

    std::cout << std::endl << std::endl;

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
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

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
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

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
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

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << std::endl;

	{
		Span sp = Span(10);

		try
		{
			std::cout << "Try shortestSpan in Span(0): ";
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception &excep)
		{
			std::cout << excep.what() << std::endl;
		}

		try
		{
			std::cout << "Try longestSpan  in Span(0): ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception &excep)
		{
			std::cout << excep.what() << std::endl;
		}

		std::cout << std::endl;

		sp.addNumber(1);

		try
		{
			std::cout << "Try shortestSpan in Span(1): ";
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception &excep)
		{
			std::cout << excep.what() << std::endl;
		}

		try
		{
			std::cout << "Try longestSpan  in Span(1): ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception &excep)
		{
			std::cout << excep.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			std::cout << "Try addNumber  in full Span: ";

			for (unsigned int i = 0; i < 12; i++)
				sp.addNumber(i);

			std::cout << "Success" << std::endl;
		}
		catch(std::exception &excep)
		{
			std::cout << excep.what() << std::endl;
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

		std::cout << "Test with random Span(10.000)" << std::endl << std::endl;

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(10000);

		for (unsigned int i = 0; i < 10000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}

		std::cout << std::endl << std::endl;

		std::cout << "Test with random Span(100.000)" << std::endl << std::endl;

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(100000);

		for (unsigned int i = 0; i < 10000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}

		std::cout << std::endl << std::endl;

		std::cout << "Test with random Span(1.000.000)" << std::endl << std::endl;
    
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
	}

  std::cout << std::endl;

	return (0);

}