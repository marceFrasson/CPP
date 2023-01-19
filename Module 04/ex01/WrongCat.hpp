#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  
  public:

    WrongCat( void );
    WrongCat( const WrongCat &source );
    ~WrongCat( void );

    WrongCat &operator=( const WrongCat &rightHandSide );
  
};

#endif
