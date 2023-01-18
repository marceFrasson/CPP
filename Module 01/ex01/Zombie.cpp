#include "Zombie.hpp"

Zombie::Zombie( void )
{
  return ;
}

Zombie::~Zombie( void )
{
  std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void Zombie::annouce(void)
{
  std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName( std::string name )
{
  _name = name;
}
