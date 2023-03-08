#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

  private:

    int               _rawBits;
    static const int  _fractionalBits;

  public:

    Fixed( void );                                       // default constructor
    Fixed( const Fixed &source );                        // copy constructor
    Fixed( const int intValue );                         // int constructor
    Fixed( const float floatValue );                     // float constructor

    ~Fixed( void );                                      // destructor

    Fixed &operator=( Fixed const &rhs );      // copy assignment operator overload

    int   getRawBits( void ) const;                      // get the raw bits of the fixed-point value
    void  setRawBits( int const raw );                   // set the raw bits of the fixed-point value
    
    int   toInt( void ) const;                           // converts fixed-point value to int
    float toFloat( void ) const;                         // converts fixed-point value to float

};

std::ostream &operator<<( std::ostream &outputStream, const Fixed &fixedPoint );

#endif
