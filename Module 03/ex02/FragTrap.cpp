#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( )
{
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;

  std::cout << "A FragTrap created!" << std::endl;

  return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;

  std::cout << "FragTrap " << _name << " created!" << std::endl;

  return ;
}

FragTrap::FragTrap( const FragTrap &source ) : ClapTrap ( source )
{
  std::cout << "FragTrap " << _name << " copied!" << std::endl;

  operator=(source);

  return ;
}

FragTrap::~FragTrap( void )
{
  std::cout << "FragTrap " << _name << " destroyed!" << std::endl;

  return ;
}

FragTrap &FragTrap::operator=( const FragTrap &rightHandSide )
{
  std::cout << "FragTrap " << _name << " assigned copied!" << std::endl;

  if (this != &rightHandSide)
  {
    _hitPoints = rightHandSide._hitPoints;
    _energyPoints = rightHandSide._energyPoints;
    _attackDamage = rightHandSide._attackDamage;
  }

  return (*this);
}

void FragTrap::highFivesGuys( void )
{
  std::cout << "High five, guys!" << std::endl;
}
