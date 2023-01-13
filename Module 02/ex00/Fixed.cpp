#include "Fixed.hpp"

Fixed::Fixed( void )
{
  std::cout << "Default constructor called" << std::endl;

  this->_rawBits = 0;

  return ;
}
Fixed::Fixed( const Fixed &instance )
{
  std::cout << "Copy constructor called" << std::endl;

  this->operator=(instance);

  return ;
}
Fixed::~Fixed( void )
{
  std::cout << "Destructor called" << std::endl;

  return ;
}

Fixed &Fixed::operator=( const Fixed &right_hand_side )
{
  std::cout << "Copy assignment operator called" << std::endl;

  if (this == &right_hand_side)
    return *this;

  this->setRawBits(this->getRawBits());

  return *this;
}

int   Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;

  return (this->_rawBits);
}

void  Fixed::setRawBits( int const raw )
{
  this->_rawBits = raw;

  return ;
}
