/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:23:51 by mmoreira          #+#    #+#             */
/*   Updated: 2023/01/21 12:59:11 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	Bureaucrat	john("John", 150);
	Bureaucrat	karen("Karen", 1);
	std::string	target("Woods");

	PresidentialPardonForm	form1("Slartibartfas");
	RobotomyRequestForm			form2("Neo");
	ShrubberyCreationForm		form3(target);
	
	std::cout << std::endl << std::endl;

	karen.executeForm(form1);
	john.executeForm(form1);
	std::cout << std::endl;
	karen.signForm(form1);
	john.signForm(form1);
	std::cout << std::endl;
	john.executeForm(form1);
	karen.executeForm(form1);

	std::cout << std::endl << std::endl << std::endl;

	karen.executeForm(form2);
	john.executeForm(form2);
	std::cout << std::endl;
	karen.signForm(form2);
	john.signForm(form2);
	std::cout << std::endl;
	john.executeForm(form2);
	karen.executeForm(form2);

	std::cout << std::endl << std::endl << std::endl;

	karen.executeForm(form3);
	john.executeForm(form3);
	std::cout << std::endl;
	karen.signForm(form3);
	john.signForm(form3);
	std::cout << std::endl;
	john.executeForm(form3);
	karen.executeForm(form3);

	std::cout << std::endl << std::endl;

	return (0);
}
