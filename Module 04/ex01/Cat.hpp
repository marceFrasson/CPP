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
    ~Cat( void );

    Cat &operator=( const Cat &rhs );

    void makeSound( void ) const;

    void setIdea( std::string idea, int index );
    void getIdea( int index );

};

#endif
