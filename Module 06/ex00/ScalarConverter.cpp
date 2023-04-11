#include "ScalarConverter.hpp"

std::string ScalarConverter::_string = "";
std::string ScalarConverter::_pseudoLiteral = "";

char        ScalarConverter::_char = 0;
int         ScalarConverter::_int = 0;
float       ScalarConverter::_float = 0;
double      ScalarConverter::_double = 0;
bool        ScalarConverter::_nan = false;


ScalarConverter::ScalarConverter( void )
{
}

ScalarConverter::ScalarConverter( const ScalarConverter &source )
{
  *this = source;

  return ;
}

ScalarConverter::~ScalarConverter( void )
{
}

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &rhs )
{
  if (this != &rhs)
  {
    _string = rhs._string;
    _char = rhs._char;
    _int = rhs._int;
    _float = rhs._float;
    _double = rhs._double;
    _nan = rhs._nan;
  }

  return (*this);
}


void ScalarConverter::convert( const std::string &toConvert )
{
  _string = toConvert;
  _pseudoLiteral = "";
  _nan = false;

  _convert( );

  _print( );

  return ;
}

void ScalarConverter::_convert( void )
{
  if (_string.size() == 1
		&& _string.find_first_not_of("0123456789") != std::string::npos)
		_toChar( );

	else if (_string.find_first_of( 'f' ) != std::string::npos)
		_toFloat( );

	else if (_string.find_first_of( '.' ) != std::string::npos)
		_toDouble( );

  else if (strtod(_string.c_str(), NULL) > MAXINT
			|| strtod(_string.c_str(), NULL) < MININT)
		_toDouble( );

	else
		_toInt( );
}


void ScalarConverter::_print( void )
{
  if (_isPseudoLiteral() || _isNan() || _isString())
    _printOthers( );

  else
    _printScalarConverter( );
}

void ScalarConverter::_printScalarConverter( void )
{
  if (!_int || !isprint(_char))
    std::cout << "char: Non displayable" << std::endl;
  
  else
    std::cout << "char: '" << _char << "'" << std::endl;
  
  std::cout << "int: " << _int << std::endl;
  std::cout << "float: " << _float << "f" << std::endl;
  std::cout << "double: " << _double << std::endl;
}

void ScalarConverter::_printOthers( void )
{
  std::cout << "char: impossible" << std::endl;
  std::cout << "int: impossible" << std::endl;

  if (_nan)
  {
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
  }

  else if (_pseudoLiteral != "")
  {
    std::cout << "float: " << _pseudoLiteral << "f" << std::endl;
    std::cout << "double: " << _pseudoLiteral << std::endl;
  }

  else
  {
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
  }
}


bool ScalarConverter::_isNan( void )
{
  if (_string != "nan")
    return (false);

  _nan = true ;

  return (true);
}

bool ScalarConverter::_isString( void )
{
  if (_string.length() > 1 &&
    _string.find_first_not_of("-+.f0123456789") != std::string::npos)
    return (true);
  
  return (false);
}

bool ScalarConverter::_isPseudoLiteral( void )
{
  std::string pseudoLiterals[6] = { "-inf", "+inf", "nan",
                                   "-inff", "+inff", "nanf" };
  int i = -1;

  while (++i < 6)
  {
    if (_string == pseudoLiterals[i])
    {
      if (i > 2)
        _pseudoLiteral = pseudoLiterals[i - 3];

      else
        _pseudoLiteral = pseudoLiterals[i];
      
      return (true);
    }
  }

  return (false);
}


void ScalarConverter::_toChar( void )
{
  _char = static_cast<char>(_string[0]);
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);  
}

void ScalarConverter::_toInt( void )
{
  _int = static_cast<int>(atoi(_string.c_str()));
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void ScalarConverter::_toFloat( void )
{
  _float = static_cast<float>(atof(_string.c_str()));
	_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
}

void ScalarConverter::_toDouble( void )
{
  _double = static_cast<double>(strtod(_string.c_str(), NULL));
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}
