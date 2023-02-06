#include "iter.hpp"

void printElement( int i )
{
  std::cout << i << " ";
}

int main( void )
{

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int length = sizeof(array) / sizeof(array[0]);

  std::cout << std::endl;

  iter(array, length, printElement);

  std::cout << std::endl << std::endl;

  return (0);

}
