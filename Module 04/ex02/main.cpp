#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{

  std::cout << std::endl;

  Cat cat;
  Dog dog;
  
  Cat copyCat(cat);
  Dog copyDog(dog);

  std::cout << std::endl;

  cat.getIdea(4);
  copyCat.getIdea(4);

  dog.getIdea(10);
  copyDog.getIdea(10);

  std::cout << std::endl;

  Animal  *animals[10];

  for (int i = 0; i < 10; i++)
  {
    if (i % 2 == 0)
      animals[i] = new Cat;
    
    else
      animals[i] = new Dog;
  }
  
  std::cout << std::endl;

  for (int i = 0; i < 10; i++)
  {
    animals[i]->makeSound();

    animals[i]->getIdea(i * 5);

    delete animals[i];

    std::cout << std::endl;
  }

  std::cout << std::endl;

  // Uncomment line 64 to see that you can't
	// instantiate a class that is abstract.
	
	// Animal animal;

  return (0);

}