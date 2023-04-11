#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"
#include <time.h>
#include <cstdlib>

class Brain
{
  
  private:

    std::string _ideas[100];

  public:

    Brain( void );
    Brain( const Brain &source );
    ~Brain( void );

    Brain &operator=( const Brain &rhs );

    void setIdea( std::string idea, int index );
    void getIdea( int index );
};

#endif
