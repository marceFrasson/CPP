#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{

  protected:

    std::string _type;

  public:

    Animal( void );
    Animal( const Animal &source );
    virtual ~Animal( void );

    Animal &operator=( const Animal &rhs );

    virtual void makeSound( void ) const = 0;
    std::string getType( void );
  
    virtual void setIdea( std::string idea, int index );
    virtual void getIdea( int index );
    
};

#endif
