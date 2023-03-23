#include "Cat.hpp"

Cat::Cat( void )
{
  _type = "Cat";
  
  _brain = new Brain();

  std::cout << "Cat constructor called." << std::endl;

  return ;
}

Cat::Cat( const Cat &source ) : Animal( source )
{
  *this = source;

  return ;
}

Cat::~Cat( void )
{
  delete _brain;

  std::cout << "Cat destructor called." << std::endl;

  return ;
}

Cat &Cat::operator=( const Cat &rhs )
{
  if (this != &rhs)
  {
    _type = rhs._type;
    _brain = new Brain(*rhs._brain);
  }

  std::cout << "Cat copy assignment operator called." << std::endl;
  
  return (*this);
}

void Cat::makeSound( void )
{
  std::cout << "meowwwwww" << std::endl;
}

void Cat::getIdea( int index )
{ 
  std::cout << _brain->ideas[index] << std::endl;

  return ;
}
