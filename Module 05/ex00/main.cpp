/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:23:51 by mmoreira          #+#    #+#             */
/*   Updated: 2023/01/20 21:12:53 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
  std::cout << std::endl << std::endl;
  
  try
	{
    Bureaucrat karen("Karen", 1);
    std::cout << karen << std::endl;
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  try
	{
    Bureaucrat john("John", 150);
    std::cout << john << std::endl;
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try
	{
    Bureaucrat karen("Karen", 0);
    std::cout << karen << std::endl;
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  try
	{
    Bureaucrat john("John", 151);
    std::cout << john << std::endl;
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try
	{
    Bureaucrat karen("Karen", 1);
    std::cout << karen << std::endl;
    karen.downGrade();
    std::cout << karen << std::endl;
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  std::cout << std::endl;

  try
	{
    Bureaucrat john("John", 150);
    std::cout << john << std::endl;
    john.upGrade();
    std::cout << john << std::endl;
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try
	{
    Bureaucrat karen("Karen", 1);
    std::cout << karen << std::endl;
    karen.upGrade();
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  std::cout << std::endl;

  try
	{
    Bureaucrat john("John", 150);
    std::cout << john << std::endl;
    john.downGrade();
  }
  catch (std::exception &exception)
  {
    std::cerr << exception.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

	return (0);
}
