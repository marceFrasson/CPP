#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:

    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap &source );
    ~ScavTrap( void );

    ScavTrap &operator=( const ScavTrap &rhs );

    void attack( const std::string& target );
    void guardGate( void );
};

#endif
