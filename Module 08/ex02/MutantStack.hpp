#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack< T, container >
{
  public:

    MutantStack( void ) : std::stack< T, container >() {};
    MutantStack( const MutantStack &source ) : std::stack< T, container >( source ) {};
    ~MutantStack( void ) {};

    MutantStack &operator=( const MutantStack &rightHandSide )
    {
      if (this != *rightHandSide)
        std::stack<T, container>::operator=(rightHandSide);
      
      return (*this);
    }

    typedef typename container::iterator iterator;

    typename container::iterator begin( void ) { return (this->c.begin()); } ;
    typename container::iterator end( void ) { return (this->c.end()); } ;
};

#endif
