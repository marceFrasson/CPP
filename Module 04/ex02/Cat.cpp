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

  std::cout << "Cat copy constructor called." << std::endl;

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

void Cat::makeSound( void ) const
{
  std::cout << "meowwwwww" << std::endl;
}

void Cat::setIdea( std::string idea, int index )
{
  _brain->setIdea(idea, index);
}

void Cat::getIdea( int index )
{
  _brain->getIdea(index);
}
