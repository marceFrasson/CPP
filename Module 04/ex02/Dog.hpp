#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  
  private:

    Brain *_brain;

  public:

    Dog( void );
    Dog( const Dog &source );
    virtual ~Dog( void );

    Dog &operator=( const Dog &rightHandSide );
  
    void makeSound( void );

};

#endif