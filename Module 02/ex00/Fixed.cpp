#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _rawBits( 0 )
{
  std::cout << "Default constructor called" << std::endl;

  return ;
}

Fixed::Fixed( const Fixed &source )
{
  std::cout << "Copy constructor called" << std::endl;

  *this = source;

  return ;
}

Fixed::~Fixed( void )
{
  std::cout << "Destructor called" << std::endl;

  return ;
}

Fixed &Fixed::operator=( const Fixed &rhs )
{
  std::cout << "Copy assignment operator called" << std::endl;

  _rawBits = rhs.getRawBits();
  
  return *this;
}

int Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called\n" << std::endl;

  return (_rawBits);
}

void Fixed::setRawBits( int const raw )
{
  _rawBits = raw;

  return ;
}
