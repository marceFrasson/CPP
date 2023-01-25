#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <unistd.h>

#define DEBUG "Yes sir, bacon really is amazing... And it costs only $1 to add more!"

#define INFO "I'm sorry sir, I've put the amount I'm allowed to put in each burger."

#define WARNING_I "You're right sir, I've started working here this month..."
#define WARNING_II  "so you might understand that I can't tell if you've been coming here for years..."
#define WARNING_III "and even if I did, my boss won't let me make exceptions for nobody."

#define ERROR_I "I'm sorry, but that won't be possible right now."
#define ERROR_II  "He's in his lunch break and won't be back for half an hour."
#define ERROR_III "But you are welcome to sit and wait for him if you want."

#define LEAVES_I "* Harl leaves with his face completely red, cursing everyone"
#define LEAVES_II "and promising that the owner would hear about this *"


class Harl
{
  
  private:

    typedef void(Harl::*functionPointer)( void );

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

  public:

    Harl( void );
    ~Harl( void );

    void complain( std::string level );

};

#endif