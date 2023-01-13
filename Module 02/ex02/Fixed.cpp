#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void )
{
  this->setRawBits(0);

  return ;
}

Fixed::Fixed( const Fixed &source )
{
  this->operator=(source);

  return ;
}

Fixed::Fixed( const int intValue )
{
  this->setRawBits(intValue << _fractionalBits);
}

Fixed::Fixed( const float floatValue )
{
  this->setRawBits((int)(floatValue * (1 << _fractionalBits) ));
}

Fixed::~Fixed( void )
{
  return ;
}

Fixed &Fixed::operator=( const Fixed &rightHandSide )
{
  if (this != &rightHandSide)
    this->setRawBits(rightHandSide.getRawBits());

  return (*this);
}

Fixed Fixed::operator+( Fixed const &rightHandSide ) const
{
  Fixed temp;

  temp.setRawBits(this->getRawBits() + rightHandSide.getRawBits());

  return (temp);
}

Fixed Fixed::operator-( Fixed const &rightHandSide ) const
{
  Fixed temp;

  temp.setRawBits(this->getRawBits() - rightHandSide.getRawBits());
  
  return (temp);
}

Fixed Fixed::operator*( Fixed const &rightHandSide ) const
{
  Fixed temp;

  temp.setRawBits((this->getRawBits() * rightHandSide.getRawBits()) >> _fractionalBits);
  
  return (temp);
}

Fixed Fixed::operator/( Fixed const &rightHandSide ) const
{
  Fixed temp;

  temp.setRawBits((this->getRawBits() / rightHandSide.getRawBits()) << _fractionalBits);
  
  return (temp);
}

bool Fixed::operator>( Fixed const &rightHandSide ) const
{
  return (this->getRawBits() > rightHandSide.getRawBits());
}

bool Fixed::operator<( Fixed const &rightHandSide ) const
{
  return (this->getRawBits() > rightHandSide.getRawBits());
}

bool Fixed::operator>=( Fixed const &rightHandSide ) const
{
  return (this->getRawBits() > rightHandSide.getRawBits());
}

bool Fixed::operator<=( Fixed const &rightHandSide ) const
{
  return (this->getRawBits() > rightHandSide.getRawBits());
}

bool Fixed::operator==( Fixed const &rightHandSide ) const
{
  return (this->getRawBits() > rightHandSide.getRawBits());
}

bool Fixed::operator!=( Fixed const &rightHandSide ) const
{
  return (this->getRawBits() > rightHandSide.getRawBits());
}

Fixed &Fixed::operator++( void )
{
  this->setRawBits(this->getRawBits() + 1);

  return (*this);
}

Fixed &Fixed::operator--( void )
{
  this->setRawBits(this->getRawBits() - 1);

  return (*this);
}

Fixed Fixed::operator++( int )
{
  Fixed temp(*this);

  this->setRawBits(this->getRawBits() + 1);

  return (temp);
}

Fixed Fixed::operator--( int )
{
  Fixed temp(*this);
  
  this->setRawBits(this->getRawBits() - 1);

  return (temp);
}

Fixed &Fixed::max( Fixed &fixedPoint1, Fixed &fixedPoint2 )
{
  if (fixedPoint1.getRawBits() >= fixedPoint2.getRawBits())
    return (fixedPoint1);

  return (fixedPoint2);
}

Fixed &Fixed::min( Fixed &fixedPoint1, Fixed &fixedPoint2 )
{
  if (fixedPoint1.getRawBits() <= fixedPoint2.getRawBits())
    return (fixedPoint1);

  return (fixedPoint2);
}

Fixed const &Fixed::max( const Fixed &fixedPoint1, const Fixed &fixedPoint2 )
{
  if (fixedPoint1.getRawBits() >= fixedPoint2.getRawBits())
    return (fixedPoint1);

  return (fixedPoint2);
}

Fixed const &Fixed::min( const Fixed &fixedPoint1, const Fixed &fixedPoint2 )
{
  if (fixedPoint1.getRawBits() <= fixedPoint2.getRawBits())
    return (fixedPoint1);

  return (fixedPoint2);
}

int Fixed::getRawBits( void ) const
{
  return (this->_rawBits);
}

void Fixed::setRawBits( int const raw )
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
