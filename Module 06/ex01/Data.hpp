#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

struct Data
{

    std::string name;
    double      age;
    int         siblings;

    Data( void );
};

uintptr_t serialize( Data *ptr );
Data *deserialize( uintptr_t raw );

std::ostream &operator<<( std::ostream &outputSream, const Data &data );

#endif
