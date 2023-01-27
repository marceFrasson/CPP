#include "Data.hpp"

Data::Data( void ) : name( "Karen "), age( 32.5 ), siblings( 4 )
{
  return ;
}

uintptr_t serialize( Data* ptr )
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize( uintptr_t raw )
{
    return (reinterpret_cast<Data*>(raw));
}

std::ostream &operator<<( std::ostream &outputSream, const Data &data )
{
  outputSream << "Name: " << data.name << "\nAge: " << data.age
    << "\nSiblings: " << data.siblings;

  return (outputSream);
}