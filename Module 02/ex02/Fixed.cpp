#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _rawBits( 0 )
{
  return ;
}

Fixed::Fixed( const Fixed &source )
{
  *this = source;

  return ;
}

Fixed::Fixed( const int intValue )
{
  setRawBits(intValue << _fractionalBits);
}

Fixed::Fixed( const float floatValue )
{
  setRawBits((int)(floatValue * (1 << _fractionalBits)));
}

Fixed::~Fixed( void )
{
  return ;
}

Fixed &Fixed::operator=( const Fixed &rhs )
{
  _rawBits = rhs.getRawBits();
  
  return *this;
}

Fixed Fixed::operator+( Fixed const &rhs ) const
{
  Fixed temp;

  temp.setRawBits(getRawBits() + rhs.getRawBits());

  return (temp);
}

Fixed Fixed::operator-( Fixed const &rhs ) const
{
  Fixed temp;

  temp.setRawBits(getRawBits() - rhs.getRawBits());
  
  return (temp);
}

Fixed Fixed::operator*( Fixed const &rhs ) const
{
  Fixed temp;

  temp.setRawBits((getRawBits() * rhs.getRawBits())
                                              >> _fractionalBits);
  
  return (temp);
}

Fixed Fixed::operator/( Fixed const &rhs ) const
{
  Fixed temp;

  temp.setRawBits((getRawBits() / rhs.getRawBits())
                                              << _fractionalBits);
  
  return (temp);
}

bool Fixed::operator>( Fixed const &rhs ) const
{
  return (getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<( Fixed const &rhs ) const
{
  return (getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>=( Fixed const &rhs ) const
{
  return (getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<=( Fixed const &rhs ) const
{
  return (getRawBits() > rhs.getRawBits());
}

bool Fixed::operator==( Fixed const &rhs ) const
{
  return (getRawBits() > rhs.getRawBits());
}

bool Fixed::operator!=( Fixed const &rhs ) const
{
  return (getRawBits() > rhs.getRawBits());
}

Fixed &Fixed::operator++( void )
{
  setRawBits(getRawBits() + 1);

  return (*this);
}

Fixed &Fixed::operator--( void )
{
  setRawBits(getRawBits() - 1);

  return (*this);
}

Fixed Fixed::operator++( int )
{
  Fixed temp(*this);

  setRawBits(getRawBits() + 1);

  return (temp);
}

Fixed Fixed::operator--( int )
{
  Fixed temp(*this);
  
  setRawBits(getRawBits() - 1);

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
  return (_rawBits);
}

void Fixed::setRawBits( int const raw )
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
