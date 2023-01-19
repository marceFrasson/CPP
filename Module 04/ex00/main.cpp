#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{

  std::cout << std::endl;

  Animal  *animal = new Animal();
  Cat     *kitty = new Cat();
  Dog     *doggo = new Dog();
  
  std::cout << std::endl;

  std::cout << animal->getType() << "'s sound:" << std::endl;
  animal->makeSound();

  std::cout << std::endl;

  std::cout << kitty->getType() << "'s sound:" << std::endl;
  kitty->makeSound();

  std::cout << std::endl;
  
  std::cout << doggo->getType() << "'s sound:" << std::endl;
  doggo->makeSound();

  std::cout << std::endl;

  delete animal;
  delete kitty;
  delete doggo;

  std::cout << std::endl << std::endl;
  std::cout << "-------------------------" << std::endl;
  std::cout << std::endl << std::endl;

  WrongAnimal *wrongAnimal = new WrongAnimal();
  WrongCat    *wrongKitty = new WrongCat();

  std::cout << std::endl;

  std::cout << wrongAnimal->getType() << "'s sound:" << std::endl;
  wrongAnimal->makeSound();

  std::cout << std::endl;

  std::cout << wrongKitty->getType() << "'s sound:" << std::endl;
  wrongKitty->makeSound();

  std::cout << std::endl;

  delete wrongAnimal;
  delete wrongKitty;

  std::cout << std::endl;

  return (0);

}