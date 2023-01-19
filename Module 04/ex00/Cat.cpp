#include "Cat.hpp"

Cat::Cat( void )
{
  _type = "Cat";
  
  std::cout << "Cat constructor called." << std::endl;

  return ;
}

Cat::Cat( const Cat &source ) : Animal( source )
{
  operator=(source);

  return ;
}

Cat::~Cat( void )
{
  std::cout << "Cat destructor called." << std::endl;

  return ;
}

Cat &Cat::operator=( const Cat &rightHandSide )
{
  if (this != &rightHandSide)
    _type = rightHandSide._type;
  
  return (*this);
}

void Cat::makeSound( void )
{
  std::cout << "meowwwwww" << std::endl;
}