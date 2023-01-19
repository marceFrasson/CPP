#include "ScavTrap.hpp"

int main( void )
{

  ScavTrap jhonDoe("Jhon Doe");

	std::cout << std::endl;

	jhonDoe.attack("Karen");
	jhonDoe.ClapTrap::attack("Karen");

  std::cout << std::endl;
  
	jhonDoe.takeDamage(50);
	jhonDoe.beRepaired(50);

	std::cout << std::endl;

	jhonDoe.guardGate();

	std::cout << std::endl;

	jhonDoe.takeDamage(50);
	jhonDoe.takeDamage(50);

	std::cout << std::endl;

	jhonDoe.beRepaired(50);
	jhonDoe.ClapTrap::attack("Karen");
	jhonDoe.attack("Karen");

	std::cout << std::endl;

  return (0);

}