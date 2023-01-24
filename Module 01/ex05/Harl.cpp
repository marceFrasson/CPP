#include "Harl.hpp"

Harl::Harl( void )
{
  return ;
}

Harl::~Harl( void )
{
  return ;
}

void Harl::debug( void )
{
  std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
  usleep(400000);
  std::cout << "I really do!" << std::endl;
  usleep(400000);
}
void Harl::info( void )
{
  std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
  usleep(400000);
  std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
  usleep(400000);
  std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
  usleep(400000);
}

void Harl::warning( void )
{
  std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
  usleep(400000);
  std::cout << "I’ve been coming for years whereas you started working \
here since last month." << std::endl;
  usleep(400000);
}

void Harl::error( void )
{
  std::cout << "This is unacceptable!" << std::endl;
  usleep(400000);
  std::cout << "I want to speak to the manager now!" << std::endl;
  usleep(400000);
}

void Harl::complain( std::string level )
{
  functionPointer fp[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  int i = 0;

  while (levels[i] != level)
    i++;

  (this->*fp[i])();
}
