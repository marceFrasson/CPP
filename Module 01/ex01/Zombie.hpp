#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
  private:

    std::string name;

  public:

    Zombie( void );
    ~Zombie( void );

    void  annouce( void );
    void  setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif
