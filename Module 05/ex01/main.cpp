/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:23:51 by mmoreira          #+#    #+#             */
/*   Updated: 2023/01/21 06:07:26 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
  std::cout << std::endl;
  
  try
	{
		Form graduation("Graduation", -12, 2);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form graduation("Graduation", 2, -12);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form graduation("Graduation", 0, 0);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form graduation("Graduation", 160, 145);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form graduation("Graduation", 145, 160);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form graduation("Graduation", 151, 151);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form graduation("Graduation", 1, 100);
		std::cout << graduation << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	Bureaucrat karen("Karen", 100);
	Form evaluation("Evaluation",90,100);
	Form enrollment("Enrollment",110,100);

	std::cout << std::endl;

	karen.signForm(evaluation);
	karen.signForm(enrollment);

  std::cout << std::endl;

	return (0);
}
