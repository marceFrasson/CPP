#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
  : AForm( "PresidentialPardon", 145, 137 ), _target( "Unknown" )
{
  return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
  : AForm( "PresidentialPardon", 145, 137 ), _target( target )
{
  return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &source )
  : AForm( "PresidentialPardon", 145, 137 )
{
  operator=(source);

  return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
  return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &rightHandSide )
{
  if (this != &rightHandSide)
    _target = rightHandSide._target;

  return (*this);
}

bool PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
  if (AForm::execute(executor))
  {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

    return (true);
  }
  
  return (false);
}
