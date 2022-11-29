#include <iostream>
#include <string>

int main( void )
{
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  // print string address
  std::cout << std::endl << "Str address: " << &string << std::endl;

  // print address held by ptr
  std::cout << "Ptr address: " << &(*stringPTR) << std::endl;

  // print address held by ref
  std::cout << "Ref address: " << &stringREF << std::endl << std::endl;

  // print string value
  std::cout << "Str value: " << string << std::endl;

  // print ptr value
  std::cout << "Ptr value: " << *stringPTR << std::endl;

  // print ref value
  std::cout << "Ref value: " << stringREF << std::endl << std::endl;

  return (0);
}
