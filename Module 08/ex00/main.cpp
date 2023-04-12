#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{

  std::cout << std::endl;

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  {
    std::cout << "vector\n{" << std::endl;

    std::vector<int> vec(array, array + (sizeof(array) / sizeof(*array)));
    std::vector<int>::iterator vecIterator;

    std::cout << std::endl << "   easyfind: 4" << std::endl;

    try
    {  
      vecIterator = easyfind(vec, 4);
      std::cout << "   found: " << *vecIterator << std::endl;
    }
    catch(const std::exception &excep)
    {
      std::cerr << excep.what() << '\n';
    }
    
    std::cout << std::endl << "   easyfind: 7" << std::endl;

    try
    {  
      vecIterator = easyfind(vec, 7);
      std::cout << "   found: " << *vecIterator << std::endl;
    }
    catch(const std::exception &excep)
    {
      std::cerr << excep.what() << '\n';
    }

	std::cout << "\n}";
  }

  std::cout << std::endl;

  {
    std::cout << std::endl << "list\n{" << std::endl;

    std::list<int> list(array, array + (sizeof(array) / sizeof(*array)));
    std::list<int>::iterator listIterator;

    std::cout << std::endl << "   easyfind: 2" << std::endl;

    try
    {  
      listIterator = easyfind(list, 2);
      std::cout << "   found: " << *listIterator << std::endl;
    }
    catch(const std::exception &excep)
    {
      std::cerr << excep.what() << '\n';
    }
    
    std::cout << std::endl << "   easyfind: 9" << std::endl;

    try
    {  
      listIterator = easyfind(list, 9);
      std::cout << "   found: " << *listIterator << std::endl;
    }
    catch(const std::exception &excep)
    {
      std::cerr << excep.what() << '\n';
    }

	std::cout << "\n}";
  }

  std::cout << std::endl;

  {
    std::cout << std::endl << "deque\n{" << std::endl;

    std::deque<int> deq(array, array + (sizeof(array) / sizeof(*array)));
    std::deque<int>::iterator deqIterator;

    std::cout << std::endl << "   easyfind: 5" << std::endl;

    try
    {  
      deqIterator = easyfind(deq, 5);
      std::cout << "   found: " << *deqIterator << std::endl;
    }
    catch(const std::exception &excep)
    {
      std::cerr << excep.what() << '\n';
    }
    
    std::cout << std::endl << "   easyfind: 8" << std::endl;

    try
    {  
      deqIterator = easyfind(deq, 8);
      std::cout << "   found: " << *deqIterator << std::endl;
    }
    catch(const std::exception &excep)
    {
      std::cerr << excep.what() << '\n';
    }

	std::cout << "\n}";
  }

  std::cout << std::endl;

  return (0);

}
