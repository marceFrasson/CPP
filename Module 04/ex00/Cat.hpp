#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
  
  public:

    Cat( void );
    Cat( const Cat &source );
    ~Cat( void );

    Cat &operator=( const Cat &rightHandSide );

    void makeSound( void );
  
};

#endif
