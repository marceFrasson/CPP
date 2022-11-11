#include "includes.hpp"

void PhoneBook::addContact(PhoneBook phoneBook)
{
  int index;

  index = findOutIndex(phoneBook);
  std::cout << "First Name: ";
  std::getline( std::cin, phoneBook.contacts[index].firstName );
  std::cout << std::endl << "Last Name: ";
  std::getline( std::cin, phoneBook.contacts[index].lastName );
  std::cout << std::endl << "Nickname: ";
  std::getline( std::cin, phoneBook.contacts[index].nickname );
  std::cout << std::endl << "Phone Number: ";
  std::getline( std::cin, phoneBook.contacts[index].phoneNumber );
  std::cout << std::endl << "Darkest Secret: ";
  std::getline( std::cin, phoneBook.contacts[index].darkestSecret );
  phoneBook.contacts[index] = phoneBook.contacts[index];
  phoneBook.numberOfContacts++;
}

void  PhoneBook::searchContact(PhoneBook phoneBook)
{
  int i = -1;
  int currentPage = FIRST_PAGE;
  std::string nextStep;

  while (++i < currentPage)
  {
    std::cout << "|";
    printIndex(phoneBook.contacts[i].index);
    std::cout << "|";
    printColumn(phoneBook.contacts[i].firstName);
    std::cout << "|";
    printColumn(phoneBook.contacts[i].lastName);
    std::cout << "|";
    printColumn(phoneBook.contacts[i].nickname);
    std::cout << "|" << std::endl;
    std::cout << "type: last page \"l\" | next page \"n\" | \"exit\"" << endl;
    std::getline( std:cin, nextStep);
    i = checkNextStep(nextStep, &currentPage);
    while (i == ASK_AGAIN)
      i = checkNextStep(nextStep, &currentPage);
  }
}

void printIndex(int index)
{
  int i = -1;

  while (++i < 9)
    std::cout << " ";
  std::cout << index;
}

void  printColumn(std::string stringToPrint)
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
    std::cout << lettersToPrint[i];
  if (lettersToPrint == 9 && stringToPrint.length() > 9)
    std::cout << ".";
}

int PhoneBook::checkNextStep(std::string nextStep, int *currentPage)
{
  if (nextStep == "l")
  {
    if (*currentPage == FIRST_PAGE)
    {
      *currentPage = LAST_PAGE;
      return (4);
    }
    if (*currentPage == LAST_PAGE)
    {
      *currentPage = FIRST_PAGE;
      return (0);
    }
  }
  else if (nextStep == "n")
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
  else
  {
    std::cout << "invalid command, try again" << std::endl;
    return (ASK_AGAIN);
  }
}

void PhoneBook::openIndexSpace(PhoneBook phoneBook)
{
  int i = -1;

  while (++i < 8)
    phoneBook.contacts[i] = phoneBook.contacts[i + 1];
  phoneBook.contacts[i].index = -1;
  phoneBook.contacts[i].firstName = "";
  phoneBook.contacts[i].lastName = "";
  phoneBook.contacts[i].nickname = "";
  phoneBook.contacts[i].phoneNumber = -1;
  phoneBook.contacts[i].darkestSecret = "";
}

int PhoneBook::findOutIndex(PhoneBook phoneBook)
{
  if (phoneBook.numberOfContacts == 8)
  {
    openIndexSpace(phoneBook);
    return (8);
  }
  else
    return (phoneBook.numberOfContacts + 1);
  return (0);
}
