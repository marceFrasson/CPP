#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( )
{
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;

  std::cout << "A ScavTrap created!" << std::endl;

  return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;

  std::cout << "ScavTrap " << _name << " created!" << std::endl;

  return ;
}

ScavTrap::ScavTrap( const ScavTrap &source ) : ClapTrap( source )
{
  std::cout << "ScavTrap " << _name << " copied!" << std::endl;

  *this = source;

  return ;
}

ScavTrap::~ScavTrap( void )
{
  std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &rhs )
{
  std::cout << "ScavTrap " << _name << " assigned copied!" << std::endl;

  if (this != &rhs)
  {
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
  }

  return (*this);
}

void ScavTrap::attack( const std::string& target )
{
  if (!_hitPoints)
  {
    std::cout << _name << " is dead!" << std::endl;

    return ;
  }
  
  else if (!_energyPoints)
  {
    std::cout << _name << " has no energy points enough to attack." << std::endl;

    return ;
  }
  
  _energyPoints--;

  std::cout << "ScavTrap " << _name << " attacks " << target
  << ", causing " << _hitPoints << " points of damage!" << std::endl;

}

void ScavTrap::guardGate( void )
{
  std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
