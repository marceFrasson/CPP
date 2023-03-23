#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  
  private:

    Brain *_brain;

  public:

    Cat( void );
    Cat( const Cat &source );
    virtual ~Cat( void );

    Cat &operator=( const Cat &rhs );

    void makeSound( void );
    void getIdea( int index );

};

#endif
