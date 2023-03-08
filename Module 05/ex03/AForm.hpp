#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class AForm
{

  private:

    const std::string _name;
    bool              _signed;
    const int         _gradeToSign;
    const int         _gradeToExecute;

  public:

    AForm( void );
    AForm( std::string name, int gradeToSign, int gradeToExecute );
    AForm( const AForm &source );
    virtual ~AForm( void );

    AForm &operator=( const AForm &rhs );

    std::string getName( void ) const;
    bool isSigned( void ) const;
    int getGradeToSign( void ) const;
    int getGradeToExecute( void ) const;
    void beSigned( Bureaucrat &bureaucrat );

    virtual bool execute( Bureaucrat const &executor ) const = 0;

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

    class FormIsNotSignedException : public std::exception
		{
			public:

				virtual const char* what() const throw();
		};

};

std::ostream &operator<<( std::ostream &outputSream, const AForm &form );

#endif
