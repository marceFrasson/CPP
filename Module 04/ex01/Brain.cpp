#include "Brain.hpp"

Brain::Brain( void )
{
  return ;
}

Brain::Brain( const Brain &source )
{
  operator=(source);

  return ;
}

Brain::~Brain( void )
{
  return ;
}

Brain &Brain::operator=( const Brain &rhs )
{
  if (this != &rhs)
    *_ideas = *rhs._ideas;
  
  return (*this);
}
