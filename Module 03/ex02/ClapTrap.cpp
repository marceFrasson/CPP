#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
  : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout << "ClapTrap " << _name << " created!" << std::endl;

  return ;
}

ClapTrap::ClapTrap( std::string name )
  : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout << "ClapTrap " << _name << " created!" << std::endl;

  return ;
}

ClapTrap::ClapTrap( const ClapTrap &source )
{
  operator=(source);

  return ;
}

ClapTrap::~ClapTrap( void )
{
  std::cout << "ClapTrap " << _name << " destroyed!\n" << std::endl;

  return ;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &rightHandSide )
{
  std::cout << "ClapTrap " << _name << " has been assigned copied!" << std::endl;

  if (this != &rightHandSide)
  {
    _name = rightHandSide._name;
    _hitPoints = rightHandSide._hitPoints;
    _energyPoints = rightHandSide._energyPoints;
    _attackDamage = rightHandSide._attackDamage;
  }

  return (*this);
}

void ClapTrap::attack( const std::string& target )
{
  if (!_hitPoints)
  {
    std::cout << _name << " is dead!" << std::endl;

    return ;
  }

  else if (!_energyPoints)
  {
    std::cout << _name << " has no energy points enough to attack!" << std::endl;

    return ;
  }
  
  _energyPoints--;

  std::cout << "ClapTrap " << _name << " attacks " << target
  << ", causing " << _hitPoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{  
  if (amount >= _hitPoints)
  {
    _hitPoints = 0;

    std::cout <<  _name << " takes " 
    << amount << " points of damage and dies!" << std::endl;
  }

  else
  {
    _hitPoints -= amount;

    std::cout <<  _name << " takes " 
    << amount << " points of damage!" << std::endl;
  }
}

void ClapTrap::beRepaired( unsigned int amount )
{
  if (!_hitPoints)
  {
    std::cout << _name << " is dead!" << std::endl;

    return ;
  }

  else if (!_energyPoints)
  {
    std::cout << _name << " has no energy points enough to heal itself!" << std::endl;

    return ;
  }

  _energyPoints--;

  _hitPoints += amount;

  std::cout <<  _name << " gets " << amount
  << " points of health back!" << std::endl;
}
