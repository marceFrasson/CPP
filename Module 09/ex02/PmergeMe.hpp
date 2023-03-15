#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>

template <typename T>
class PmergeMe
{

  public:

    PmergeMe( void );
    PmergeMe( const PmergeMe<T> &source );
    ~PmergeMe( void );

    PmergeMe &operator=( const PmergeMe<T> &rhs );

    void printMe( T &container );
    void mergeSort( T &container );
    void mergeSort( T &container, typename T::iterator begin, typename T::iterator end );
    void mergeMe( typename T::iterator begin,
                typename T::iterator middle, typename T::iterator end );
    bool hasDuplicates( T &container );

};

#endif
