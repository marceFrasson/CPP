#include "Animal.hpp"

Animal::Animal( void ) : _type( "Unknown" )
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

Animal &Animal::operator=( const Animal &rhs )
{
  if (this != &rhs)
    _type = rhs._type;
  
  return (*this);
}

void Animal::makeSound( void )
{
  std::cout << "..." << std::endl;
}

std::string Animal::getType( void )
{
  return (_type);
}
