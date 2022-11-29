#include "Zombie.hpp"

int main( void )
{
  Zombie *zombies;
  int N = 5;
  int i = -1;

  zombies = zombieHorde(N, "zombieHorde");

  while (++i < N)
    (zombies[i]).annouce();

  delete[] zombies;
  return (0);
}
