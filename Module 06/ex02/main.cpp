#include "Base.hpp"

int main( void )
{
  Base*	base;

	for ( int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		base = generate();
		identify( base );
		identify( *base );
		delete base;
	}
	std::cout << std::endl;
}
