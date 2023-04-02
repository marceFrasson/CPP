#include "ScalarConverter.hpp"

int main( int argc, char *argv[] )
{
  if (argc != 2)
  {
    std::cout << "\nusage: ./ScalarConverter <stringToConvert>\n" << std::endl;
    std::cout << "<stringToConvert> can be a char, an int, a float or a double\n" << std::endl;

    return (1);
  }

  std::cout << std::endl;

  ScalarConverter::convert(argv[1]);

  std::cout << std::endl;

  return (0);

}