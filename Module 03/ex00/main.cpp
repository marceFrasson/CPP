#include "ClapTrap.hpp"

int main( void )
{

  ClapTrap jhonDoe("Jhon Doe");

	std::cout << std::endl;

	jhonDoe.attack("Karen");

  std::cout << std::endl;
  
	jhonDoe.takeDamage(5);
	jhonDoe.beRepaired(5);

	std::cout << std::endl;

	jhonDoe.takeDamage(5);
	jhonDoe.takeDamage(5);

	std::cout << std::endl;

	jhonDoe.beRepaired(5);
	jhonDoe.attack("Karen");

	std::cout << std::endl;

  return (0);

}