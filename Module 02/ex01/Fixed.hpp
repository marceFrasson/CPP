#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

  private:

    int               _rawBits;
    static const int  _fractionalBits;

  public:

    Fixed( const int intValue );                         // default constructor
    Fixed( const float floatValue );                     // default constructor
    Fixed( const Fixed &instance );                      // copy constructor

    ~Fixed( void );                                      // destructor

    Fixed &operator=( Fixed const &right_hand_side );    // copy assignment operator overload
    Fixed &operator<<( Fixed const &right_hand_side );   // copy assignment operator overload

    int   getRawBits( void ) const;                      // get the raw bits of the fixed-point value
    void  setRawBits( int const raw );                   // set the raw bits of the fixed-point value

};

#endif
