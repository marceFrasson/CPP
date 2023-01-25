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

  operator=(source);

  return ;
}

Fixed::Fixed( const int intValue )
{
  std::cout << "Int constructor called" << std::endl;

  setRawBits(intValue << _fractionalBits);
}

Fixed::Fixed( const float floatValue )
{
  std::cout << "Float constructor called" << std::endl;

  setRawBits((int)(floatValue * (1 << _fractionalBits)));
}

Fixed::~Fixed( void )
{
  std::cout << "Destructor called" << std::endl;

  return ;
}

Fixed &Fixed::operator=( const Fixed &rightHandSide )
{
  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &rightHandSide)
    setRawBits(rightHandSide.getRawBits());

  return (*this);
}

int   Fixed::getRawBits( void ) const
{
  return (_rawBits);
}

void  Fixed::setRawBits( int const raw )
{
  _rawBits = raw;
}

int Fixed::toInt( void ) const
{
  return(getRawBits() >> _fractionalBits);
}

float Fixed::toFloat( void ) const
{
  return((float) getRawBits() / (1 << _fractionalBits));
}

std::ostream &operator<<( std::ostream &outputStream, const Fixed &fixedPoint )
{
  outputStream << fixedPoint.toFloat();

  return (outputStream);
}
