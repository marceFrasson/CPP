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
    ~Dog( void );

    Dog &operator=( const Dog &rhs );
  
    void makeSound( void ) const;
    
    void setIdea( std::string idea, int index );
    void getIdea( int index );
};

#endif
