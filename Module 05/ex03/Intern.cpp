#include "Intern.hpp"

Intern::Intern( void )
{
  return ;
}

Intern::Intern( const Intern &source )
{
  operator=(source);

  return ;
}

Intern::~Intern( void )
{
  return ;
}

Intern &Intern::operator=( const Intern &rhs )
{
  (void)rhs;

  return (*this);
}

AForm *Intern::makeForm( std::string name, std::string target )
{
  AForm *( Intern::*makeAForm[TOTAL_FORMS] )
              ( std::string target ) = { &Intern::_makePresidentialPardonForm,
                                         &Intern::_makeRobotomyRequestForm,
                                         &Intern::_makeShrubberyCreationForm };

  std::string formNames[TOTAL_FORMS] = { "Presidential Pardon",
                                         "Robotomy Request",
                                         "Shrubbery Creation" };
  int i = -1;
  
  while (++i < TOTAL_FORMS)
  {
    if (name == formNames[i])
    {
      std::cout << "Form " << name << " created." << std::endl;

      return ((this->*makeAForm[i])(target));
    }
  }

  std::cout << "error: Form \"" << name << "\" doesn't exist." << std::endl;

  return (NULL);
}

AForm *Intern::_makePresidentialPardonForm( std::string target )
{
  return (new PresidentialPardonForm(target));
}

AForm *Intern::_makeRobotomyRequestForm( std::string target )
{
  return (new RobotomyRequestForm(target));
}

AForm *Intern::_makeShrubberyCreationForm( std::string target )
{
  return (new ShrubberyCreationForm(target));
}
