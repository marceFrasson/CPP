#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
  : AForm( "PresidentialPardon", 25, 5 ), _target( "Unknown" )
{
  return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
  : AForm( "PresidentialPardon", 25, 5 ), _target( target )
{
  return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &source )
  : AForm( "PresidentialPardon", 25, 5 )
{
  *this = source;

  return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
  return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs )
{
  if (this != &rhs)
    _target = rhs._target;

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
