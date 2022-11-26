#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
  this->name = name;
}

Zombie::~Zombie(void)
{
  std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

void Zombie::annouce(void)
{
  std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
