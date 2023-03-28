#include "Dog.hpp"

Dog::Dog( void )
{
  _type = "Dog";
  
  _brain = new Brain();

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
  delete _brain;

  std::cout << "Dog destructor called." << std::endl;

  return ;
}

Dog &Dog::operator=( const Dog &rhs )
{
 if (this != &rhs)
  {
    _type = rhs._type;
    _brain = new Brain(*rhs._brain);
  }

  std::cout << "Dog copy assignment operator called." << std::endl;
  
  return (*this);
}

void Dog::makeSound( void ) const
{
  std::cout << "WOOF WOOF" << std::endl;
}

void Dog::setIdea( std::string idea, int index )
{
  _brain->setIdea(idea, index);
}

void Dog::getIdea( int index )
{  
  _brain->getIdea(index);
}
