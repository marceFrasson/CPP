#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
  private:

    std::string _target;

  public:

    ShrubberyCreationForm( void );
    ShrubberyCreationForm( std::string &target );
    ShrubberyCreationForm( const ShrubberyCreationForm &source );
    ~ShrubberyCreationForm( void );

    ShrubberyCreationForm &operator=( const ShrubberyCreationForm &rhs );

    bool execute( const Bureaucrat &executor ) const;
};

#endif
