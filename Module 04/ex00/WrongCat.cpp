#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
  _type = "WrongCat";
  
  std::cout << "WrongCat constructor called." << std::endl;

  return ;
}

WrongCat::WrongCat( const WrongCat &source ) : WrongAnimal( source )
{
  operator=(source);

  return ;
}

WrongCat::~WrongCat( void )
{
  std::cout << "WrongCat destructor called." << std::endl;

  return ;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs )
{
  if (this != &rhs)
    _type = rhs._type;
  
  return (*this);
}
