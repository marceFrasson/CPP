#include "PmergeMe.hpp"

template <typename T>
PmergeMe<T>::PmergeMe( void )
{
  return ;
}

template <typename T>
PmergeMe<T>::PmergeMe( const PmergeMe &source )
{
  *this = source;
}

template <typename T>
PmergeMe<T>::~PmergeMe( void )
{
  return ;
}

template <typename T>
PmergeMe<T> &PmergeMe<T>::operator=( const PmergeMe<T> &rhs )
{
	if (this != &rhs)
		*this = rhs;
  
	return (*this);
}

template <typename T>
bool PmergeMe<T>::hasDuplicates( T &container )
{
  T sortedContainer = container;

  mergeSort(sortedContainer);

  return (std::unique(sortedContainer.begin(),
            sortedContainer.end()) != sortedContainer.end());
}

template <typename T>
void PmergeMe<T>::mergeSort( T &container )
{
  mergeSort(container, container.begin(), container.end());
}

template <typename T>
void PmergeMe<T>::mergeSort( T &container, typename T::iterator begin,
                                typename T::iterator end )
{
  if (begin == end || ++begin == end)
    return ;

  --begin;

  typename T::iterator middle = begin;
  std::advance(middle, std::distance(begin, end) / 2);

  mergeSort(container, begin, middle);
  mergeSort(container, middle, end);
  mergeMe(begin, middle, end);
}

template <typename T>
void PmergeMe<T>::mergeMe( typename T::iterator begin,
              typename T::iterator middle, typename T::iterator end )
{
  T left(begin, middle);
  T right(middle, end);

  typename T::iterator leftIter = left.begin();
  typename T::iterator rightIter = right.begin();
  typename T::iterator mergeIter = begin;

  while (leftIter != left.end() && rightIter != right.end())
  {
    if (*leftIter <= *rightIter)
    {
      *mergeIter = *leftIter;
      ++leftIter;
    }

    else
    {
      *mergeIter = *rightIter;
      ++rightIter;
    }
    ++mergeIter;
  }

  while (leftIter != left.end())
  {
    *mergeIter = *leftIter;
    ++leftIter;
    ++mergeIter;
  }

  while (rightIter != right.end())
  {
    *mergeIter = *rightIter;
    ++rightIter;
    ++mergeIter;
  }
}

template <typename T>
void PmergeMe<T>::printMe( T &container )
{
  int i = 0;

  for (typename T::const_iterator it = container.begin();
              it != container.end(); ++it)
  {
    std::cout << *it << " ";

    i++;

    if (i >= 15)
    {
      std::cout << "[..]";

      break;
    }
  }

  std::cout << std::endl;
}

template class PmergeMe< std::deque<int> >;
template class PmergeMe< std::list<int> >;
