#include "Form.hpp"

Form::Form( void )
          : _name( "Unknown" ), _signed( false ),
            _gradeToSign( 75 ), _gradeToExecute( 75 )
{
  return ;
}

Form::Form( std::string name, int gradeToSign, int gradeToExecute )
          : _name( name ),_signed( false ), _gradeToSign( gradeToSign ),
            _gradeToExecute( gradeToExecute )
{
  if (_gradeToSign < 1 || _gradeToExecute < 1)
    throw GradeTooHighException();
  
  if (_gradeToSign > 150 || _gradeToExecute > 150)
    throw GradeTooLowException();
  
  return ;
}

Form::Form( const Form &source )
          : _name( source.getName() ), _gradeToSign( source.getGradeToSign() ),
            _gradeToExecute( source.getGradeToExecute() )
{
  operator=(source);

  return ;
}

Form::~Form( void )
{
  return ;
}

Form &Form::operator=( const Form &rightHandSide )
{
  if (this != &rightHandSide)
    _signed = rightHandSide.isSigned();

  return (*this);
}

std::string Form::getName( void ) const
{
  return (_name);
}

bool Form::isSigned( void ) const
{
  return (_signed);
}

int Form::getGradeToSign( void ) const
{
  return (_gradeToSign);
}

int Form::getGradeToExecute( void ) const
{
  return (_gradeToExecute);
}

void Form::beSigned( Bureaucrat &bureaucrat )
{
  if (bureaucrat.getGrade() <= _gradeToSign)
  {
    _signed = true;

    std::cout << bureaucrat.getName() << "'s "
    << _name << " signed." << std::endl;
  }

  else
  {
    std::cout << bureaucrat.getName() << "'s " << _name << " not signed. ";
    
    throw GradeTooLowException();
  }
}

std::ostream &operator<<( std::ostream &outputSream, const Form &form )
{
  outputSream << form.getName();
  outputSream << " Form:";
  outputSream << "\nGrade to sign: ";
  outputSream << form.getGradeToSign();
  outputSream << "\nGrade to execute: ";
  outputSream << form.getGradeToExecute();
  outputSream << "\nSigned: ";

  if (form.isSigned())
    outputSream << "Yes";

  else
    outputSream << "No";

  return (outputSream);
}

const char* Form::GradeTooHighException::what() const throw()
{
  return ("Form exception: grade too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
  return ("Form exception: grade too low.");
}
