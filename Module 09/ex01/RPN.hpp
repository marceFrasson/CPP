#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <cctype>

class RPNCalculator
{
  
  public:

    RPNCalculator( void );
    RPNCalculator( const RPNCalculator &source );
    ~RPNCalculator( void );

    RPNCalculator &operator=( const RPNCalculator &rhs );
    
    double evaluate( std::string expression );

    class Error : public std::exception
    {
      public:

        virtual const char* what() const throw();
    };

};

#endif
