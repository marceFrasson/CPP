#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{

  private:

    const std::string _name;
    bool              _signed;
    const int         _gradeToSign;
    const int         _gradeToExecute;

  public:

    Form( void );
    Form( std::string name, int gradeToSign, int gradeToExecute );
    Form( const Form &source );
    ~Form( void );

    Form &operator=( const Form &rhs );

    std::string getName( void ) const;
    bool isSigned( void ) const;
    int getGradeToSign( void ) const;
    int getGradeToExecute( void ) const;
    void beSigned( Bureaucrat &bureaucrat );

    class GradeTooHighException : public std::exception
    {
      public:

        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
      public:

        virtual const char* what() const throw();
    };

};

std::ostream &operator<<( std::ostream &outputSream, const Form &form );

#endif
