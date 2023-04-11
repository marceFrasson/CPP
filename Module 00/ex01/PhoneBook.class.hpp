#ifndef PHONEBOOK_CLASS_HPP  
# define PHONEBOOK_CLASS_HPP

#include "includeLibs.hpp"
#include "Contact.class.hpp"

class PhoneBook
{
  private:

    Contact _contacts[8];
    int     _numberOfContacts;

  public:
  
    PhoneBook( void );
    ~PhoneBook( void );

    void  addContact( PhoneBook phoneBook );
    int   searchContact( PhoneBook phoneBook );

    int   findOutIndex( PhoneBook phoneBook );
    int   checkNextStep( std::string nextStep, int *currentPage );
    void  nextPage( int &i, int &currentPage, int &endOfPage, int numberOfContacts );

    void  formmatToPrint( Contact contact );
    void  printIndex( int index );
    void  printColumn( std::string stringToPrint );
    void  printPhoneBook( int i, PhoneBook phoneBook );
};

#endif
