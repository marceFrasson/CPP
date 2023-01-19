#include "FragTrap.hpp"

int main( void )
{

  FragTrap jhonDoe("Jhon Doe");

	std::cout << std::endl;

	jhonDoe.attack("Karen");
	jhonDoe.ClapTrap::attack("Karen");

  std::cout << std::endl;
  
	jhonDoe.takeDamage(70);
	jhonDoe.beRepaired(70);

	std::cout << std::endl;

	jhonDoe.highFivesGuys();

	std::cout << std::endl;

	jhonDoe.takeDamage(70);
	jhonDoe.takeDamage(70);

	std::cout << std::endl;

	jhonDoe.beRepaired(70);
	jhonDoe.ClapTrap::attack("Karen");
	jhonDoe.attack("Karen");

	std::cout << std::endl;

  return (0);

}
