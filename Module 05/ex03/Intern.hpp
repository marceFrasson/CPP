#ifndef INTERN_HPP
# define INTERN_HPP

#define TOTAL_FORMS 3

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

  private:

    AForm *_makePresidentialPardonForm( std::string target );
    AForm *_makeRobotomyRequestForm( std::string target );
    AForm *_makeShrubberyCreationForm( std::string target );

  public:

    Intern( void );
    Intern( const Intern &source );
    ~Intern( void );

    Intern &operator=( const Intern &rhs );

    AForm *makeForm( std::string name, std::string target );

};

#endif
