/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:23:51 by mmoreira          #+#    #+#             */
/*   Updated: 2023/01/24 01:51:40 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main( void )
{
	
	Bureaucrat	karen("Karen", 50);
	Intern			someRandomIntern;
	AForm				*presidentialPardonForm;
	AForm				*robotomyRequestForm;
	AForm 			*shrubberyCreationForm;
	AForm				*fakeForm;
	
	std::cout << std::endl << std::endl;

	presidentialPardonForm = someRandomIntern.makeForm("Presidential Pardon", "Trillian Astra");

	robotomyRequestForm = someRandomIntern.makeForm("Robotomy Request", "Bender");

	shrubberyCreationForm = someRandomIntern.makeForm("Shrubbery Creation", "Arboreal");

	fakeForm = someRandomIntern.makeForm("Fake Form", "Phony");
	
	std::cout << std::endl << std::endl;

	karen.executeForm(*presidentialPardonForm);
	karen.signForm(*presidentialPardonForm);
	karen.executeForm(*presidentialPardonForm);

	std::cout << std::endl << std::endl;

	karen.executeForm(*robotomyRequestForm);
	karen.signForm(*robotomyRequestForm);
	karen.executeForm(*robotomyRequestForm);

	std::cout << std::endl << std::endl;

	karen.executeForm(*shrubberyCreationForm);
	karen.signForm(*shrubberyCreationForm);
	karen.executeForm(*shrubberyCreationForm);

	std::cout << std::endl << std::endl;

	delete presidentialPardonForm;
	delete robotomyRequestForm;
	delete shrubberyCreationForm;

	if (fakeForm)
		delete fakeForm;

	return (0);

}
