#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "Unknown" )
{
  std::cout << "WrongAnimal constructor called." << std::endl;

  return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &source )
{
  operator=(source);

  return ;
}

WrongAnimal::~WrongAnimal( void )
{
  std::cout << "WrongAnimal destructor called." << std::endl;

  return ;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &rhs )
{
  if (this != &rhs)
    _type = rhs._type;
  
  return (*this);
}

void WrongAnimal::makeSound( void )
{
  std::cout << "grrrrr..." << std::endl;
}

std::string WrongAnimal::getType( void )
{
  return (_type);
}
