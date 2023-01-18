#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
  _name = name;
}

Zombie::~Zombie(void)
{
  std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void Zombie::annouce(void)
{
  std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
