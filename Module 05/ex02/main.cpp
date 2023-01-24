/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:23:51 by mmoreira          #+#    #+#             */
/*   Updated: 2023/01/23 21:38:58 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	Bureaucrat	karen("Karen", 1);
	Bureaucrat	john("John", 50);
	std::string	target("Pluto");

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
	karen.executeForm(form1);
	john.executeForm(form1);

	std::cout << std::endl << std::endl << std::endl;

	karen.executeForm(form2);
	john.executeForm(form2);
	std::cout << std::endl;
	karen.signForm(form2);
	john.signForm(form2);
	std::cout << std::endl;
	karen.executeForm(form2);
	john.executeForm(form2);

	std::cout << std::endl << std::endl << std::endl;

	karen.executeForm(form3);
	john.executeForm(form3);
	std::cout << std::endl;
	karen.signForm(form3);
	john.signForm(form3);
	std::cout << std::endl;
	karen.executeForm(form3);
	john.executeForm(form3);

	std::cout << std::endl << std::endl;

	return (0);
}
