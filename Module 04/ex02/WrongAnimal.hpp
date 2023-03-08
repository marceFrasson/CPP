#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{

  protected:

    std::string _type;

  public:

    WrongAnimal( void );
    WrongAnimal( std::string type );
    WrongAnimal( const WrongAnimal &source );
    ~WrongAnimal( void );

    WrongAnimal &operator=( const WrongAnimal &rhs );

    void makeSound( void );
    std::string getType( void );
  
};

#endif