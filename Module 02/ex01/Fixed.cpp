#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void )
{
  std::cout << "Default constructor called" << std::endl;

  this->setRawBits(0);

  return ;
}

Fixed::Fixed( const Fixed &source )
{
  std::cout << "Copy constructor called" << std::endl;

  this->operator=(source);

  return ;
}

Fixed::Fixed( const int intValue )
{
  std::cout << "Int constructor called" << std::endl;

  this->setRawBits(intValue << _fractionalBits);
}

Fixed::Fixed( const float floatValue )
{
  std::cout << "Float constructor called" << std::endl;

  this->setRawBits((int)(floatValue * (1 << _fractionalBits)));
}

Fixed::~Fixed( void )
{
  std::cout << "Destructor called" << std::endl;

  return ;
}

Fixed &Fixed::operator=( const Fixed &source )
{
  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &source)
    this->setRawBits(source.getRawBits());

  return (*this);
}

int   Fixed::getRawBits( void ) const
{
  return (this->_rawBits);
}

void  Fixed::setRawBits( int const raw )
{
  this->_rawBits = raw;
}

int Fixed::toInt( void ) const
{
  return(this->getRawBits() >> _fractionalBits);
}

float Fixed::toFloat( void ) const
{
  return((float) this->getRawBits() / (1 << _fractionalBits));
}

std::ostream &operator<<( std::ostream &outputStream, const Fixed &fixedPoint )
{
  outputStream << fixedPoint.toFloat();

  return (outputStream);
}
