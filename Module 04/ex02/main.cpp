#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{

  std::cout << std::endl;

  Cat     *kitty = new Cat();
  Dog     *doggo = new Dog();
  
  std::cout << std::endl;

  std::cout << kitty->getType() << "'s sound:" << std::endl;
  kitty->makeSound();

  std::cout << std::endl;
  
  std::cout << doggo->getType() << "'s sound:" << std::endl;
  doggo->makeSound();

  std::cout << std::endl;

  delete kitty;
  delete doggo;

  std::cout << std::endl;

  return (0);

}