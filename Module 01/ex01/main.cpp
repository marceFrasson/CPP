#include "Zombie.hpp"

int main( void )
{

  Zombie *zombies;
  int N = 5;
  int i = -1;

  zombies = zombieHorde(N, "zombieHorde");

  std::cout << std::endl;

  while (++i < N)
    zombies[i].annouce();

  std::cout << std::endl;

  delete[] zombies;

  std::cout << std::endl;

  return (0);

}
