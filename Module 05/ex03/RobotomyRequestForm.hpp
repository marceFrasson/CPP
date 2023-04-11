#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <time.h>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
  private:

    std::string _target;

  public:

    RobotomyRequestForm( void );
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( const RobotomyRequestForm &source );
    ~RobotomyRequestForm( void );

    RobotomyRequestForm &operator=( const RobotomyRequestForm &rhs );

    bool execute( const Bureaucrat &executor ) const;
};

#endif
