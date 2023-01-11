#include "Harl.hpp"

void atendentResponse( int i )
{
  std::cout << std::endl;

  if (i == 0)
  {
    std::cout << DEBUG << std::endl << std::endl;
    usleep(400000);
  }

  else if (i == 1)
  {
    std::cout << INFO << std::endl << std::endl;
    usleep(400000);
  }

  else if (i == 2)
  {
    std::cout << WARNING_I << std::endl;
    usleep(400000);
    std::cout << WARNING_II << std::endl;
    usleep(400000);
    std::cout << WARNING_III << std::endl << std::endl;
    usleep(400000);
  }

  else if (i == 3)
  {
    std::cout << ERROR_I << std::endl;
    usleep(400000);
    std::cout << ERROR_II << std::endl << std::endl;
    usleep(400000);
  }

  else if (i == 4)
  {
    std::cout << LEAVES_I << std::endl;
    usleep(400000);
    std::cout << LEAVES_II << std::endl << std::endl;
    usleep(800000);
  }
}

void delay( void )
{
  std::cout << std::endl;
  usleep(1000000);
}

int main( void )
{
  Harl harl;
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  std::string interactions[] = {DEBUG,
                                INFO,
                                WARNING_I, WARNING_II, WARNING_III,
                                ERROR_I, ERROR_II,
                                LEAVES_I, LEAVES_II};

  std::cout << std::endl;

  int i = 0;

  while (i < 4)
  {
    std::cout << "Harl: " << std::endl << std::endl;
    harl.complain(levels[i]);
    delay();
    std::cout << "\nAtendent: " << std::endl;
    atendentResponse(i);
    delay();
    i++;
  }

  atendentResponse(i);

  return (0);
}