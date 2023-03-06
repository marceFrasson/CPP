#include "BitcoinExchange.hpp"

int main( int argc, char *argv[] )
{

  if (argc != 2)
  {
    std::cout << "Usage: btc <filename>" << std::endl;
    return (1);
  }

  std::string                 csvFileName;
  std::string                 txtFileName;

  csvFileName = "input.csv";
  txtFileName = argv[1];

  bitcoinExchange(csvFileName, txtFileName);

  return (0);

}
