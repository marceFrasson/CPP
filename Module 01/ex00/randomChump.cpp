#include "Zombie.hpp"

void randomChump( std::string name )
{
  Zombie zombie(name);
  
  zombie.annouce();

  std::cout << std::endl;

  return ;
}
