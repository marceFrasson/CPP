#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
  : AForm( "RobotomyRequestForm", 72, 45 ), _target( "Unknown" )
{
  return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
  : AForm( "RobotomyRequestForm", 72, 45 ), _target( target )
{
  return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &source )
  : AForm( "RobotomyRequestForm", 72, 45 )
{
  *this = source;

  return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
  return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs )
{
  if (this != &rhs)
    _target = rhs._target;

  return (*this);
}

bool RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
  if (AForm::execute(executor))
  {
    std::cout << "\n\nBzzZzttrrzZZz   BZzzrtZzZrrtZZztrrzz" << std::endl;

    srand((unsigned int)time(NULL));
    
    if (rand() % 2)
      std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
      std::cout << _target << "'s robotomy failed." << std::endl;

    return (true);
  }

  return (false);
}
