#include "Data.hpp"

int main()

{
    Data       data;
    Data      *deserialized = NULL;
    uintptr_t  serialized;

    std::cout << std::endl;
    std::cout << "-------- Original Data: --------" << std::endl;
    std::cout << std::endl;

    std::cout << data << std::endl;

    std::cout << std::endl;
    std::cout << "------- Serialized Data: -------" << std::endl;
    std::cout << std::endl;

    serialized = serialize( &data );

    std::cout << serialized << std::endl;

    std::cout << std::endl;
    std::cout << "------ Deserialized Data: ------" << std::endl;
    std::cout << std::endl;

    deserialized = deserialize( serialized );
    
    std::cout << *deserialized << std::endl;

    std::cout << std::endl;
    
    return (0);
    
}
