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

    /*  .  *  .  *  .  *   CONSTRUCTORS   *  .  *  .  *  .  */

    ScalarConverter( void );
    ScalarConverter( const ScalarConverter &source );


    /*  .  *  .  *  .  *    ATTRIBUTES    *  .  *  .  *  .  */

    static std::string _string;
    static std::string _pseudoLiteral;

    static char        _char;
    static int         _int;
    static float       _float;
    static double      _double;
    static bool        _nan;


    /*  .  *  .  *  .  *      METHODS     *  .  *  .  *  .  */

    /* convert */

    static void _convert( void );
    

    /* print */

    static void _print( void );
    static void _printOthers( void );
    static void _printScalarConverter( void );

    
    /* isBool */

    static bool _isNan( void );
    static bool _isString( void );
    static bool _isPseudoLiteral( void );


    /* toType */

    static void _toChar( void );
    static void _toInt( void );
    static void _toFloat( void );
    static void _toDouble( void );

  public:

    /*  .  *  .  *  .  *   CONSTRUCTORS   *  .  *  .  *  .  */

    ~ScalarConverter( void );

    ScalarConverter &operator=( const ScalarConverter &rhs );


    /*  .  *  .  *  .  *      METHOD      *  .  *  .  *  .  */

    /* convert */
    
    static void convert( const std::string &toConvert );
};

#endif
