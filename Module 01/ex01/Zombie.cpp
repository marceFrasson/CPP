#include "Zombie.hpp"

Zombie::Zombie( void )
{
  return ;
}

Zombie::~Zombie( void )
{
  std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

void Zombie::annouce(void)
{
  std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName( std::string name )
{
  this->name = name;
}
