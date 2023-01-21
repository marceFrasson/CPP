#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
  : AForm( "RobotomyRequestForm", 25, 5 ), _target( "Unknown" )
{
  return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
  : AForm( "RobotomyRequestForm", 25, 5 ), _target( target )
{
  return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &source )
  : AForm( "RobotomyRequestForm", 25, 5 )
{
  operator=(source);

  return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
  return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rightHandSide )
{
  if (this != &rightHandSide)
    _target = rightHandSide._target;

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
