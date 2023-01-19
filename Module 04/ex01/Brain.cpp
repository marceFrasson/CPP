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

Brain &Brain::operator=( const Brain &rightHandSide )
{
  if (this != &rightHandSide)
    *_ideas = *rightHandSide._ideas;
  
  return (*this);
}
