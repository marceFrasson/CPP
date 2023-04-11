#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
  std::string name;
  double      age;
  int         siblings;

  Data( void );
};

class Serializer
{

  private:

    Serializer( void );
    Serializer( const Serializer &source );

  public:

    ~Serializer( void );

    Serializer &operator=( const Serializer &rhs );

    static uintptr_t serialize( Data *ptr );
    static Data *deserialize( uintptr_t raw );

};

std::ostream &operator<<( std::ostream &outputSream, const Data &data );

#endif
