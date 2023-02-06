#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *array, T length, F function)
{
  int i = -1;

  while (++i < length)
    function(array[i]);
}

#endif
