#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>

# define MAXINT 2147483647
# define MININT -2147483648

class ScalarConverter
{
  private:

    ScalarConverter( void );
    ScalarConverter( const ScalarConverter &source );

    static std::string _string;
    static std::string _pseudoLiteral;

    static char        _char;
    static int         _int;
    static float       _float;
    static double      _double;
    static bool        _nan;

    static void _convert( void );

    static void _print( void );
    static void _printOthers( void );
    static void _printScalarConverter( void );
    
    static bool _isNan( void );
    static bool _isString( void );
    static bool _isPseudoLiteral( void );

    static void _toChar( void );
    static void _toInt( void );
    static void _toFloat( void );
    static void _toDouble( void );

  public:

    ~ScalarConverter( void );

    ScalarConverter &operator=( const ScalarConverter &rhs );

    static void convert( const std::string &toConvert );
};

#endif
