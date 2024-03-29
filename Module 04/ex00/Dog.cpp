#include "Dog.hpp"

Dog::Dog( void )
{
  _type = "Dog";
  
  std::cout << "Dog constructor called.\n" << std::endl;

  return ;
}

Dog::Dog( const Dog &source ) : Animal( source )
{
  *this = source;

  std::cout << "Dog copy constructor called.\n" << std::endl;

  return ;
}

Dog::~Dog( void )
{
  std::cout << "Dog destructor called." << std::endl;

  return ;
}

Dog &Dog::operator=( const Dog &rhs )
{
  if (this != &rhs)
    _type = rhs._type;
  
  return (*this);
}

void Dog::makeSound( void ) const
{
  std::cout << "WOOF WOOF" << std::endl;
}
