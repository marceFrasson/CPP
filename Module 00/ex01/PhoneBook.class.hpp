#ifndef PHONEBOOK_CLASS_H  
# define PHONEBOOK_CLASS_H

#include "includes.hpp"

class PhoneBook
{
  private:

    Contact contacts[8];
    int numberOfContacts;

  public:
  
    PhoneBook( void );
    ~PhoneBook( void );

    void addContact(PhoneBook phoneBook);
    void searchContact(PhoneBook phoneBook);
    void printIndex(int index);
    void printColumn(std::string stringToPrint);
    int checkNextStep(std::string nextStep, int *currentPage);
    void openIndexSpace(PhoneBook phoneBook);
    int findOutIndex(PhoneBook phoneBook);
    void formmatToPrint(Contact contact);  
};

PhoneBook::PhoneBook( void )
{
  this->numberOfContacts = 0;
}

PhoneBook::~PhoneBook( void )
{
  return ;
}

#endif