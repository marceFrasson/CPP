#include "RPN.hpp"

int main(int argc, char *argv[])
{

  if (argc != 2)
  {
    std::cerr << "Usage: ./RPN <RPN expression>" << std::endl;
    
    return (1);
  }

  RPNCalculator RPN;

  std::string expression = argv[1];

  try
	{
    double result = RPN.evaluate(expression);

    std::cout << "\nResult: " << result << std::endl << std::endl;
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  return (0);

}
