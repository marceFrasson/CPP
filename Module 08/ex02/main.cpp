#include "MutantStack.hpp"
#include <list>

int main( void )
{

  std::cout << std::endl;

  {
    std::cout << "MutantStack\n{" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << std::endl;

    std::cout << "   top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << std::endl;

    std::cout << "   size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << std::endl << "   numbers: ";

    while (it != ite)
    {
      std::cout << *it;

      if (it < ite - 1)
          std::cout << ", ";

      ++it;
    }

    std::stack<int> s(mstack);

    std::cout << std::endl;

    std::cout << "\n}\n" << std::endl;
  }
  
  {
    std::cout << "List\n{" << std::endl;

    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);

    std::cout << std::endl;

    std::cout << "   top: " << mstack.back() << std::endl;

    mstack.pop_back();

    std::cout << std::endl;

    std::cout << "   size: " << mstack.size() << std::endl;

    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();

    std::cout << std::endl << "   numbers: ";


    while (it != ite)
    {
      std::cout << *it << ", ";

      ++it;
    }

    std::cout << std::endl;

    std::cout << "\n}\n" << std::endl;
  }

  return (0);

}