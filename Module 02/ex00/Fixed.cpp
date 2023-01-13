#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void )
{
  std::cout << "Default constructor called" << std::endl;

  this->_rawBits = 0;

  return ;
}
Fixed::Fixed( const Fixed &source )
{
  std::cout << "Copy constructor called" << std::endl;

  this->operator=(source);

  return ;
}
Fixed::~Fixed( void )
{
  std::cout << "Destructor called" << std::endl;

  return ;
}

Fixed &Fixed::operator=( const Fixed &rightHandSide )
{
  std::cout << "Copy assignment operator called" << std::endl;

  if (this == &rightHandSide)
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
