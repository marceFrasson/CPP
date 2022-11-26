#ifndef PHONEBOOK_CLASS_H  
# define PHONEBOOK_CLASS_H

#include "includeLibs.hpp"
#include "Contact.class.hpp"

class PhoneBook
{
  private:

    Contact contacts[8];
    int numberOfContacts;

  public:
  
    PhoneBook( void );
    ~PhoneBook( void );

    void  addContact(PhoneBook phoneBook);
    int   searchContact(PhoneBook phoneBook);
    void  printIndex(int index);
    void  printColumn(std::string stringToPrint);
    int   checkNextStep(std::string nextStep, int *currentPage);
    int   findOutIndex(PhoneBook phoneBook);
    void  formmatToPrint(Contact contact);  
};

#endif