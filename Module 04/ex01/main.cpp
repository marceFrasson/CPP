#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{

  std::cout << std::endl;

  Animal  *animals[10];

  int i = -1;

  while (++i < 5)
    animals[i] = new Cat();

  std::cout << std::endl;
  
  while (i < 10)
    animals[i++] = new Dog();
  
  std::cout << std::endl;

  i = -1;

  while (++i < 10)
    delete animals[i];

  std::cout << std::endl;

  return (0);

}