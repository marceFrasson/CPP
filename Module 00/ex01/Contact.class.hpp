#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include "includes.hpp"

class Contact
{
  private:

    int index;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    int phoneNumber;
    std::string darkestSecret;

  public:

    Contact( void );
    ~Contact( void );
};

Contact::Contact( void )
{
  this->index = -1;
  this->firstName = "";
  this->lastName = "";
  this->nickname = "";
  this->phoneNumber = -1;
  this->darkestSecret = "";
}

Contact::~Contact( void )
{
  return ;
}

#endif