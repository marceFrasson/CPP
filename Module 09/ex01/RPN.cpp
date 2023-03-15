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
  if (this != &rhs)
    *this = rhs;

  return (*this);
}

double RPNCalculator::evaluate( std::string expression )
{
  for (std::string::size_type i = 0; i < expression.size(); ++i)
  {
    char c = expression[i];
    if (!isdigit(c) && c != ' ' && c != '+' && c != '-' && c != '*' && c != '/')
      throw Error();
  }

  std::stack<double>  operandStack;
  std::stringstream   stringStream(expression);
  std::string         token;

  while (getline(stringStream, token, ' '))
  {
    if (token == "+" || token == "-" || token == "*" || token == "/")
    {
      if (operandStack.size() < 2)
        throw Error();

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
