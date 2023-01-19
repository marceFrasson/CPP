#include "Dog.hpp"

Dog::Dog( void )
{
  _type = "Dog";
  
  std::cout << "Dog constructor called." << std::endl;

  return ;
}

Dog::Dog( const Dog &source ) : Animal( source )
{
  operator=(source);

  return ;
}

Dog::~Dog( void )
{
  std::cout << "Dog destructor called." << std::endl;

  return ;
}

Dog &Dog::operator=( const Dog &rightHandSide )
{
  if (this != &rightHandSide)
    _type = rightHandSide._type;
  
  return (*this);
}

void Dog::makeSound( void )
{
  std::cout << "WOOF WOOF" << std::endl;
}