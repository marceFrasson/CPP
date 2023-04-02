#include "Span.hpp"

Span::Span( void )
{
  return ;
}

Span::Span( unsigned int N ) : _size( N )
{
  return ;
}

Span::Span( const Span &source )
{
  *this = source;

  return ;
}

Span::~Span( void )
{
  return ;
}

Span &Span::operator=( const Span &rhs )
{
  if (this != &rhs)
    _size = rhs._size;

  return (*this);
}

void Span::addNumber( int number )
{
  if (_vec.size() >= _size)
    throw fullSpanException();
  _vec.push_back(number);
}

void Span::addNumbers(  vector::iterator firstNumber, vector::iterator lastNumber )
{
  while (firstNumber != lastNumber)
  {
    if (_vec.size() != _size)
    {
      _vec.push_back(*firstNumber);
      firstNumber++;
    }
    else
      throw fullSpanException();
  }
  _vec.push_back(*lastNumber);
}

int Span::shortestSpan( void )
{
  if (_vec.size() <= 1)
    throw noSpanException();
  
  std::sort(_vec.begin(), _vec.end());

  int minSpan = _vec[1] - _vec[0];

  for (unsigned int i = 1; i < _vec.size() - 1; i++)
  {
    int currentSpan = _vec[i + 1] - _vec[i];

    if (currentSpan < minSpan)
      minSpan = currentSpan;
  }

  return (minSpan);
}

int Span::longestSpan( void )
{
  if (_vec.size() <= 1)
    throw noSpanException();
  
  vector::iterator max = max_element(_vec.begin(), _vec.end());
  vector::iterator min = min_element(_vec.begin(), _vec.end());

  return (*max - *min);
}

const char* Span::fullSpanException::what( void ) const throw( )
{
  return ("Full span!");
}

const char* Span::noSpanException::what( void ) const throw( )
{
  return ("No span!");
}