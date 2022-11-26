#include "Zombie.hpp"

int main(void)
{
  Zombie stackZombie("stack allocated zombie");
  stackZombie.annouce();

  Zombie *heapZombie = newZombie("heap allocated zombie");

  randomChump("local stack zombie");
  
  delete heapZombie;
  return (0);
}
