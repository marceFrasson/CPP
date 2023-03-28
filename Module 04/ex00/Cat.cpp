#include "Cat.hpp"

Cat::Cat( void )
{
  _type = "Cat";
  
  std::cout << "Cat constructor called.\n" << std::endl;

  return ;
}

Cat::Cat( const Cat &source ) : Animal( source )
{
  *this = source;

	std::cout << "Cat copy constructor called.\n" << std::endl;

  return ;
}

Cat::~Cat( void )
{
  std::cout << "Cat destructor called." << std::endl;

  return ;
}

Cat &Cat::operator=( const Cat &rhs )
{
  if (this != &rhs)
    _type = rhs._type;
  
  return (*this);
}

void Cat::makeSound( void ) const
{
  std::cout << "meowwwwww" << std::endl;
}
