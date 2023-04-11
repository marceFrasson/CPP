#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *array, int length, F function)
{
  for (int i = 0; i < length; i++)
    function(array[i]);
}

template <typename T>
void printElement( T n )
{
  std::cout << n << " ";
}

#endif
