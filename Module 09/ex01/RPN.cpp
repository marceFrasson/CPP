#include "RPN.hpp"

RPNCalculator::RPNCalculator( void )
{
  return ;
}

RPNCalculator::RPNCalculator( const RPNCalculator &source )
{
  *this = source;
}

RPNCalculator::~RPNCalculator( void )
{
  return ;
}

RPNCalculator &RPNCalculator::operator=( const RPNCalculator &rhs )
{
  *this = rhs;

  return (*this);
}

double RPNCalculator::evaluate( std::string expression )
{
  if (expression.find('(') != std::string::npos || expression.find(')') != std::string::npos
    || expression.find('[') != std::string::npos || expression.find(']') != std::string::npos)
    throw Error();

  std::stack<double>  operandStack;
  std::stringstream   stringStream(expression);
  std::string         token;

  while (getline(stringStream, token, ' '))
  {
    if (token == "+" || token == "-" || token == "*" || token == "/")
    {
      double rhs = operandStack.top();
      operandStack.pop();
      double lhs = operandStack.top();
      operandStack.pop();

      if (token == "+")
        operandStack.push(lhs + rhs);
      else if (token == "-")
        operandStack.push(lhs - rhs);
      else if (token == "*")
        operandStack.push(lhs * rhs);
      else if (token == "/")
        operandStack.push(lhs / rhs);
    }

    else if (std::atof(token.c_str()) > 10)
      return (42);

    else
      operandStack.push(std::atof(token.c_str()));
  }

  return operandStack.top();
}

const char* RPNCalculator::Error::what() const throw()
{
  return ("Error");
}
