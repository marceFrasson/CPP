#include "Zombie.hpp"

void randomChump( std::string name )
{
  Zombie *zombie = new Zombie(name);
  zombie->annouce();
  delete zombie;
  return ;
}
