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

    iterator begin( void ) { return (this->c.begin()); } ;
    iterator end( void ) { return (this->c.end()); } ;

    typedef typename container::reverse_iterator reverse_iterator;

    reverse_iterator rbegin( void ) { return (this->c.rbegin()); } ;
    reverse_iterator rend( void ) { return (this->c.rend()); } ;

    typedef typename container::const_iterator const_iterator;

    const_iterator begin( void ) const { return (this->c.begin()); } ;
    const_iterator end( void ) const { return (this->c.end()); } ;

    typedef typename container::const_reverse_iterator const_reverse_iterator;

    const_reverse_iterator rbegin( void ) const { return (this->c.rbegin()); } ;
    const_reverse_iterator rend( void ) const { return (this->c.rend()); } ;
};

#endif
