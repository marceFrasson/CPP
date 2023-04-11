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

    MutantStack &operator=( const MutantStack &rhs )
    {
      if (this != *rhs)
        std::stack<T, container>::operator=(rhs);
      
      return (*this);
    }

    typedef typename container::iterator iterator;

    typename container::const_iterator begin( void ) const { return (this->c.begin()); } ;
    typename container::iterator end( void ) { return (this->c.end()); } ;
};

#endif
