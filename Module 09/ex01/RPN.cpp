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
  std::stack<double> operandStack;
  std::string token(expression);

  int i = -1;

  while (token[++i])
  {
    if (token[i] == ' ')
      continue ;

    else if (isdigit(token[i]))
      operandStack.push(token[i] - '0');

    else if (token[i] == '+' || token[i] == '-' || token[i] == '*' || token[i] == '/')
    {
      if (operandStack.size() < 2)
        throw std::runtime_error("\nError: not enough operands for the operator.\n");
      
      double rhs = operandStack.top();
      operandStack.pop();
      double lhs = operandStack.top();
      operandStack.pop();

      if (token[i] == '+')
        operandStack.push(lhs + rhs);

      else if (token[i] == '-')
        operandStack.push(lhs - rhs);

      else if (token[i] == '*')
        operandStack.push(lhs * rhs);

      else if (token[i] == '/')
        operandStack.push(lhs / rhs);
    }
    
    else
      throw std::runtime_error("\nError: invalid character.\n");
  }
  
  // std::stringstream resultStream;

  // while (!operandStack.empty())
  // {
  //   resultStream << operandStack.top();

  //   operandStack.pop();
    
  //   if (!operandStack.empty())
  //     resultStream << " ";
  // }

  //   return resultStream.str();

    return operandStack.top();
}

const char* RPNCalculator::Error::what() const throw()
{
  return ("Error");
}

