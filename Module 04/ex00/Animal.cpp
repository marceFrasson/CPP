#include "Animal.hpp"

Animal::Animal( void )
{
  std::cout << "Animal constructor called." << std::endl;

  return ;
}

Animal::Animal( const Animal &source )
{
  operator=(source);

  return ;
}

Animal::~Animal( void )
{
  std::cout << "Animal destructor called." << std::endl;

  return ;
}

Animal &Animal::operator=( const Animal &rightHandSide )
{
  if (this != &rightHandSide)
    _type = rightHandSide._type;
  
  return (*this);
}

void Animal::makeSound( void )
{
  std::cout << "..." << std::endl;
}
