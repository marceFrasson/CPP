#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	private:

		std::string _target;

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &source );
		~PresidentialPardonForm( void );

		PresidentialPardonForm &operator=( const PresidentialPardonForm &rhs );

		bool execute( const Bureaucrat &executor ) const;
};

#endif
