#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>

# define MAXINT 2147483647
# define MININT -2147483648

class Conversion
{

  private:

    std::string _string;

    char        _char;
    int         _int;
    float       _float;
    double      _double;

    std::string _pseudoLiteral;

    bool        _nan;

    void _convert( void );
    
    void _printOthers( void );
    void _printConversion( void );

    bool _isNan( void );
    bool _isString( void );
    bool _isPseudoLiteral( void );

    void _toChar( void );
    void _toInt( void );
    void _toFloat( void );
    void _toDouble( void );

  public:

    Conversion( void );
    Conversion( std::string toConvert );
    Conversion( const Conversion &source );
    ~Conversion( void );

    Conversion &operator=( const Conversion &rhs );

    void print( void );

};

#endif
