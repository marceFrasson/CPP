#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{

  std::cout << std::endl;

  Animal  *animal = new Animal();
  Cat     *kitty = new Cat();
  Dog     *doggo = new Dog();
  
  std::cout << std::endl;

  animal->makeSound();

  std::cout << std::endl;

  kitty->makeSound();

  std::cout << std::endl;
  
  doggo->makeSound();

  std::cout << std::endl;

  kitty->Animal::makeSound();
  doggo->Animal::makeSound();

  std::cout << std::endl;

  delete animal;
  delete kitty;
  delete doggo;

  std::cout << std::endl;
  
  return (0);

}