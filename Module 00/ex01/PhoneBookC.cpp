#include "includes.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void )
{
  this->numberOfContacts = 0;
}

PhoneBook::~PhoneBook( void )
{
  return ;
}

void PhoneBook::addContact(PhoneBook phoneBook)
{
  int index;

  index = findOutIndex(phoneBook);
  this->contacts->setIndex(index);
  std::cout << std::endl << "First Name: ";
  (this->contacts[index]).setFirstName();
  std::cout << "Last Name: ";
  (this->contacts[index]).setLastName();
  std::cout << "Nickname: ";
  (this->contacts[index]).setNickname();
  std::cout << "Phone Number: ";
  (this->contacts[index]).setPhoneNumber();
  std::cout << "Darkest Secret: ";
  (this->contacts[index]).setDarkestSecret();
  this->numberOfContacts++;
  printMenu();
}

int  PhoneBook::searchContact(PhoneBook phoneBook)
{
  int i = -1;
  int firstPage = 0;
  int lastPage = 0;
  std::string nextStep;

  if (phoneBook.numberOfContacts > 4)
  {
    firstPage = 4;
    lastPage = 8 - firstPage;
  }
  else
    firstPage = phoneBook.numberOfContacts;
  std::cout << "fp: " << firstPage << std::endl << "lp: " << lastPage << std::endl;
  int currentPage = firstPage;
  while (true)
  {
    while (++i < currentPage)
    {
      std::cout << "|";
      printIndex((phoneBook.contacts[i]).getIndex());
      std::cout << "|";
      printColumn((phoneBook.contacts[i]).getFirstName());
      std::cout << "|";
      printColumn((phoneBook.contacts[i]).getLastName());
      std::cout << "|";
      printColumn((phoneBook.contacts[i]).getNickname());
      std::cout << "|" << std::endl << std::endl;
    }
    std::cout << "   next page (N) | menu (M) | exit (EXIT)" << std::endl << std::endl;
    std::cout << "> ";
    std::getline( std::cin, nextStep );
    if (nextStep == "EXIT")
      return (1);
    else if (nextStep == "M")
    {
      std::cout << std::endl << std::endl;
      printMenu();
      break ;
    }
    else if (nextStep == "N")
    {
      if (currentPage)
      {
        i = firstPage;
        currentPage = lastPage;
      }
      continue ;
    }
  }
  return (0);
}

void PhoneBook::printIndex(int index)
{
  int i = -1;

  while (++i < 9)
    std::cout << " ";
  std::cout << index;
}

void  PhoneBook::printColumn(std::string stringToPrint)
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

int PhoneBook::checkNextStep(std::string nextStep, int *currentPage)
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

void PhoneBook::openIndexSpace(PhoneBook phoneBook)
{
  int i = -1;

  while (++i < 8)
    phoneBook.contacts[i] = phoneBook.contacts[i + 1];
}

int PhoneBook::findOutIndex(PhoneBook phoneBook)
{
  if (phoneBook.numberOfContacts == 8)
  {
    openIndexSpace(phoneBook);
    return (8);
  }
  else
    return (phoneBook.numberOfContacts);
  return (0);
}
