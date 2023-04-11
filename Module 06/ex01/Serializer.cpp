#include "Serializer.hpp"

Data::Data( void ) : name( "Karen "), age( 32.5 ), siblings( 4 )
{
}

Serializer::Serializer( void )
{
}

Serializer::Serializer( const Serializer &source )
{
  (void) source;
}

Serializer::~Serializer( void )
{
}

Serializer &Serializer::operator=( const Serializer &rhs )
{
  (void) rhs;

  return (*this);
}

uintptr_t Serializer::serialize( Data* ptr )
{
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize( uintptr_t raw )
{
  return (reinterpret_cast<Data*>(raw));
}

std::ostream &operator<<( std::ostream &outputSream, const Data &data )
{
  outputSream << "Name: " << data.name << "\nAge: " << data.age
    << "\nSiblings: " << data.siblings;

  return (outputSream);
}
