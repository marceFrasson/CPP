#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
  private:

    typedef std::vector<int> vector;

    unsigned int  _size;
    vector        _vec;

  public:

    Span( void );
    Span( unsigned int N );
    Span( const Span &source );
    ~Span( void );

    Span &operator=( const Span &rhs );

    void addNumber( int number );
    void addNumbers( vector::iterator firstNumber, vector::iterator lastNumber );
    
    int shortestSpan( void );
    int longestSpan( void );

    class fullSpanException : public std::exception
    {
      public:
      
        virtual const char* what() const throw();
    };

    class noSpanException : public std::exception
    {
      public:
      
        virtual const char* what() const throw();
    };
};

#endif
