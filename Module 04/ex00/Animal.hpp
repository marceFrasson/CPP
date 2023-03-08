#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{

  protected:

    std::string _type;

  public:

    Animal( void );
    Animal( std::string type );
    Animal( const Animal &source );
    ~Animal( void );

    Animal &operator=( const Animal &rhs );

    void makeSound( void );
    std::string getType( void );
  
};

#endif
