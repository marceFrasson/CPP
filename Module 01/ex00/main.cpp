#include "Zombie.hpp"

int main(void)
{ 
  Zombie *zombie = newZombie("heap allocated");
  zombie->annouce();

  randomChump("stack allocated");
  
  delete zombie;
  return (0);
}
