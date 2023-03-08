#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
  return ;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name( name )
{
  if (grade < 1)
    throw GradeTooHighException();
  else if (grade > 150)
    throw GradeTooLowException();
  
  _grade = grade;

  return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat &source )
{
  _grade = source._grade;

  return ;
}

Bureaucrat::~Bureaucrat( void )
{
  return ;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &rhs )
{
  if (this != &rhs)
    _grade = rhs._grade;

  return (*this);
}

std::string Bureaucrat::getName( void ) const
{
  return (_name);
}

int Bureaucrat::getGrade( void ) const
{
  return (_grade);
}

void Bureaucrat::upGrade( void )
{
  _grade--;

  try
  {
    if (_grade < 1)
      throw GradeTooHighException();
  }

  catch (const std:: exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }
}

void Bureaucrat::downGrade( void )
{
  _grade++;

  try
  {
    if (_grade > 150)
      throw GradeTooLowException();
  }
  
  catch (const std:: exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }
}

std::ostream &operator<<( std::ostream &outputStream, const Bureaucrat &bureaucrat )
{
  outputStream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";

  return (outputStream);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Bureaucrat exception: grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Bureaucrat exception: grade too low.");
}
