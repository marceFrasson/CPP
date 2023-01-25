#include "Zombie.hpp"

int main(void)
{
  
  std::cout << std::endl;

  Zombie *zombie = newZombie("heap allocated");

  zombie->annouce();

  randomChump("stack allocated");

  delete zombie;
  
  std::cout << std::endl;
  
  return (0);

}
