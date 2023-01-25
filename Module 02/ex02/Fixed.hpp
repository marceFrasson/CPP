#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

  private:

    int               _rawBits;                            // bits before the decimal point
    static const int  _fractionalBits;                     // bits after the decimal point

  public:

    Fixed( void );                                         // default constructor
    Fixed( const Fixed &source );                          // copy constructor
    Fixed( const int intValue );                           // int constructor
    Fixed( const float floatValue );                       // float constructor

    ~Fixed( void );                                        // destructor

    Fixed &operator=( Fixed const &rightHandSide );        // copy assignment operator overload
    
    Fixed operator+( Fixed const &rightHandSide ) const;   // sum arithmetic operator overload
    Fixed operator-( Fixed const &rightHandSide ) const;   // subtraction arithmetic operator overload
    Fixed operator*( Fixed const &rightHandSide ) const;   // multiply arithmetic operator overload
    Fixed operator/( Fixed const &rightHandSide ) const;   // divide arithmetic operator overload

    bool  operator>( Fixed const &rightHandSide ) const;   // great comparison operator overload
    bool  operator<( Fixed const &rightHandSide ) const;   // small comparison operator overload
    bool  operator>=( Fixed const &rightHandSide ) const;  // great|equal comparison operator overload
    bool  operator<=( Fixed const &rightHandSide ) const;  // small|equal comparison operator overload
    bool  operator==( Fixed const &rightHandSide ) const;  // equal comparison operator overload
    bool  operator!=( Fixed const &rightHandSide ) const;  // not equal comparison operator overload

    Fixed &operator++( void );                             // pre-increment operator overload
    Fixed &operator--( void );                             // pre-decrement operator overload
    Fixed operator++( int );                               // post-increment operator overload
    Fixed operator--( int );                               // post-decrement operator overload

    static Fixed &max( Fixed &fixedPoint1,                 // returns greatest fixed-point number
                        Fixed &fixedPoint2 );
		static Fixed &min( Fixed &fixedPoint1,                 // returns smallest fixed-point number
                        Fixed &fixedPoint2 );

		static const Fixed &max( const Fixed &fixedPoint1,     // returns greatest fixed-point number
                              const Fixed &fixedPoint2 );
		static const Fixed &min( const Fixed &fixedPoint1,     // returns smallest fixed-point number
                              const Fixed &fixedPoint2 );

    int   getRawBits( void ) const;                        // get raw bits of fixed-point value
    void  setRawBits( int const raw );                     // set raw bits of fixed-point value
    
    int   toInt( void ) const;                             // converts fixed-point value to int
    float toFloat( void ) const;                           // converts fixed-point value to float

};                                                         

std::ostream &operator<<( std::ostream &outputStream,      // inserts float representation of
                              const Fixed &fixedPoint );    // fixed-point value to output stream

#endif
