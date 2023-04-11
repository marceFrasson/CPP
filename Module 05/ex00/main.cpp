/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:23:51 by mmoreira          #+#    #+#             */
/*   Updated: 2023/04/11 06:50:53 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
  std::cout << std::endl;
  
  try
	{
    Bureaucrat karen("Karen", 1);
    std::cout << karen << std::endl;
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  try
	{
    Bureaucrat john("John", 150);
    std::cout << john << std::endl;
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try
	{
    Bureaucrat karen("Karen", 0);
    std::cout << karen << std::endl;
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  try
	{
    Bureaucrat john("John", 151);
    std::cout << john << std::endl;
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try
	{
    Bureaucrat karen("Karen", 1);
    std::cout << karen << std::endl;
    karen.downGrade();
    std::cout << karen << std::endl;
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  std::cout << std::endl;

  try
	{
    Bureaucrat john("John", 150);
    std::cout << john << std::endl;
    john.upGrade();
    std::cout << john << std::endl;
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try
	{
    Bureaucrat karen("Karen", 1);
    std::cout << karen << std::endl;
    karen.upGrade();
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  std::cout << std::endl;

  try
	{
    Bureaucrat john("John", 150);
    std::cout << john << std::endl;
    john.downGrade();
  }
  catch (std::exception &excep)
  {
    std::cerr << excep.what() << std::endl;
  }

  std::cout << std::endl;

	return (0);
}
