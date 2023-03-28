#include "Brain.hpp"

std::string listOfIdeas[100] = {

  "Find food",
  "Hunt prey",
  "Escape predators",
  "Seek shelter",
  "Explore territory",
  "Mark territory",
  "Socialize with other animals",
  "Engage in play",
  "Establish dominance",
  "Groom myself",
  "Protect offspring",
  "Migrate to a new area",
  "Search for a mate",
  "Build a nest or den",
  "Communicate with others",
  "Forage for plants",
  "Sleep or rest",
  "Climb trees or rocks",
  "Dig burrows",
  "Swim or dive",
  "Catch insects",
  "Use camouflage",
  "Engage in courtship rituals",
  "Mate and reproduce",
  "Hibernate or estivate",
  "Form alliances with others",
  "Defend my territory",
  "Teach offspring essential skills",
  "Display warning signals",
  "Mimic other animals",
  "Store food for later",
  "Prey on other animals",
  "Collect materials for nesting",
  "Bask in the sun",
  "Hide from danger",
  "Use tools",
  "Follow scent trails",
  "Create sound signals",
  "Use body language",
  "Find water",
  "Clean my living space",
  "Develop unique hunting techniques",
  "Learn from my environment",
  "Use echolocation",
  "Use teamwork to accomplish tasks",
  "Keep warm or cool",
  "Change color for communication or camouflage",
  "Regrow lost body parts",
  "Engage in symbiotic relationships",
  "Care for injured or sick members of my group",
  "Patrol my territory",
  "Adapt to new environments",
  "Share resources with others",
  "Fight rival animals",
  "Show submission to a dominant animal",
  "Return to a specific location annually",
  "Engage in cooperative hunting",
  "Use vocalizations to warn others of danger",
  "Recognize familiar individuals",
  "Avoid harmful substances",
  "Sense changes in my environment",
  "Develop strategies to avoid detection",
  "Navigate using landmarks or the stars",
  "Help raise the offspring of others",
  "Travel in groups or packs",
  "Use problem-solving skills",
  "Use memories to guide actions",
  "Engage in grooming behaviors with others",
  "Seek comfort from others when stressed",
  "Use visual signals to communicate",
  "Locate food by its scent",
  "Create or modify habitats",
  "Use sounds to locate prey",
  "Chase or stalk prey",
  "Use body posture to intimidate others",
  "Show affection to other animals",
  "Display aggression in response to threats",
  "Learn from observing others",
  "Engage in cultural transmission of behaviors",
  "Avoid predators using speed or agility",
  "Engage in play fighting",
  "Use vibrations to communicate",
  "Defend myself using natural weapons",
  "Use tails for balance or communication",
  "Exploit the resources of other animals",
  "Clean parasites from my bodies or others",
  "Use chemical signals for communication",
  "Cool down by panting or sweating",
  "Show curiosity about new objects",
  "Camouflage myself in my environment",
  "Develop resistance to toxins",
  "Use deceptive behaviors to avoid predation",
  "Hibernate during extreme conditions",
  "Display specific rituals to maintain social bonds",
  "Feed and care for my offspring",
  "Change behaviors with the seasons",
  "Use sense of touch",
  "Use my sense of taste to identify food",
  "Avoid conflict through appeasement behaviors",
  "Cooperate with other species for mutual benefit"

};

Brain::Brain( void )
{
  std::srand((unsigned int)time(NULL));
  
	for(int i = 0; i < 100; i++)
		_ideas[i] = listOfIdeas[rand() % 100];

  std::cout << "Brain constructor called." << std::endl;

  return ;
}

Brain::Brain( const Brain &source )
{
  *this = source;

  std::cout << "Brain copy constructor called." << std::endl;

  return ;
}

Brain::~Brain( void )
{
  std::cout << "Brain destructor called." << std::endl;
  
  return ;
}

Brain &Brain::operator=( const Brain &rhs )
{
  if (this != &rhs)
  {
    for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
  }

  std::cout << "Brain copy assignment operator called." << std::endl;
  
  return (*this);
}

void Brain::setIdea( std::string idea, int index )
{
  _ideas[index] = idea;
}

void Brain::getIdea( int index )
{
  std::cout << _ideas[index] << std::endl;
}
