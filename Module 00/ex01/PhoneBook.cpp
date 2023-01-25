#include "includes.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : _numberOfContacts( 0 )
{
  return ;
}

PhoneBook::~PhoneBook( void )
{
  return ;
}

void PhoneBook::addContact( PhoneBook phoneBook )
{
  int index = findOutIndex(phoneBook);

  (_contacts[index]).setIndex(index);
  std::cout << std::endl << "First Name: ";

  (_contacts[index]).setFirstName();
  std::cout << "Last Name: ";

  (_contacts[index]).setLastName();
  std::cout << "Nickname: ";

  (_contacts[index]).setNickname();
  std::cout << "Phone Number: ";

  (_contacts[index]).setPhoneNumber();
  std::cout << "Darkest Secret: ";

  (_contacts[index]).setDarkestSecret();
  _numberOfContacts++;

  std::cout << std::endl << "Contact " << (_contacts[index]).getFirstName() << " "
    << (_contacts[index]).getLastName() << " added." << std::endl;

  printMenu();
}

int  PhoneBook::searchContact( PhoneBook phoneBook )
{
  int i = -1;
  int endOfPage;
  int currentPage = FIRST_PAGE;
  int numberOfContacts = phoneBook._numberOfContacts;
  std::string nextStep;

  if (numberOfContacts > 8)
    numberOfContacts = 8;

  if (numberOfContacts > 4)
    endOfPage = 4;
  else
    endOfPage = numberOfContacts;
  
  while (true)
  {
    while (++i < endOfPage)
      printPhoneBook(i, phoneBook);

    std::cout << "   next page (N) | menu (M) | exit (EXIT)" << std::endl << std::endl;
    std::cout << "> ";

    std::getline( std::cin, nextStep );

    if (nextStep == "EXIT")
      return (1);
    else if (nextStep == "M")
      return (0);
    else if (nextStep == "N")
      nextPage(i, currentPage, endOfPage, numberOfContacts);
  }
  return (0);
}

void PhoneBook::printIndex( int index )
{
  int i = -1;

  while (++i < 9)
    std::cout << " ";

  std::cout << index;
}

void  PhoneBook::printColumn( std::string stringToPrint )
{
  int lettersToPrint = 0;
  int i = -1;

  lettersToPrint = stringToPrint.length();

  if (lettersToPrint > 9)
    lettersToPrint = 9;

  while (++i < 10 - lettersToPrint)
    std::cout << " ";

  i = -1;

  while (++i < lettersToPrint)
    std::cout << stringToPrint[i];

  if (lettersToPrint == 9 && stringToPrint.length() > 9)
    std::cout << ".";
}

int PhoneBook::checkNextStep( std::string nextStep, int *currentPage )
{
  if (nextStep == "N")
  {
    if (*currentPage == FIRST_PAGE)
    {
      *currentPage = LAST_PAGE;

      return (0);
    }
    if (*currentPage == LAST_PAGE)
    {
      *currentPage = FIRST_PAGE;

      return (4);
    }
  }
  std::cout << "invalid command, try again" << std::endl << std::endl;

  return (ASK_AGAIN);
}

int PhoneBook::findOutIndex( PhoneBook phoneBook )
{
  if (phoneBook._numberOfContacts < 8)
    return (phoneBook._numberOfContacts);
  else
    return (phoneBook._numberOfContacts % 8);

  return (0);
}

void PhoneBook::printPhoneBook( int i, PhoneBook phoneBook )
{
  std::cout << "|";

  printIndex((phoneBook._contacts[i]).getIndex());

  std::cout << "|";

  printColumn((phoneBook._contacts[i]).getFirstName());

  std::cout << "|";

  printColumn((phoneBook._contacts[i]).getLastName());

  std::cout << "|";

  printColumn((phoneBook._contacts[i]).getNickname());

  std::cout << "|" << std::endl << std::endl;
}

void PhoneBook::nextPage( int &i, int &currentPage, int &endOfPage, int numberOfContacts )
{
  std::cout << std::endl;

  if (currentPage == FIRST_PAGE)
  {
    if (numberOfContacts > 4)
    {
      endOfPage = numberOfContacts;
      i = 3;
      currentPage = LAST_PAGE;
    }
    else
      i = -1;
  }
  else
  {
    endOfPage = 4;
    i = -1;
    currentPage = FIRST_PAGE;
  }
}
