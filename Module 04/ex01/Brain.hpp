#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"
#include <time.h>
#include <cstdlib>

class Brain
{
  
  public:

    std::string ideas[100];

    Brain( void );
    Brain( const Brain &source );
    ~Brain( void );

    Brain &operator=( const Brain &rhs );

};

#endif
