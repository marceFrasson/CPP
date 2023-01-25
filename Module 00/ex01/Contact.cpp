#include "Contact.class.hpp"

Contact::Contact( void )
{
  return ;
}

Contact::~Contact( void )
{
  return ;
}

void Contact::setIndex( int index )
{
  if (index < 8)
    _index = index + 1;
  else
    _index = index % 8;
}

void Contact::setFirstName( void )
{
  std::string input;

  input = "";

  while (input == "")
    std::getline(std::cin, input);
  
  _firstName = input;
}

void Contact::setLastName( void )
{
  std::string input;

  input = "";

  while (input == "")
    std::getline(std::cin, input);

  _lastName = input;
}

void Contact::setNickname( void )
{
  std::string input;

  input = "";

  while (input == "")
    std::getline(std::cin, input);
    
  _nickname = input;
}

void Contact::setPhoneNumber( void )
{
  std::string input;

  input = "";

  while (input == "")
    std::getline(std::cin, input);
    
  _phoneNumber = input;
}

void Contact::setDarkestSecret( void )
{
  std::string input;

  input = "";

  while (input == "")
    std::getline(std::cin, input);
    
  _darkestSecret = input;
}

int Contact::getIndex( void )
{
  return (_index);
}

std::string Contact::getFirstName( void )
{
  return (_firstName);
}

std::string Contact::getLastName( void )
{
  return (_lastName);
}

std::string Contact::getNickname( void )
{
  return (_nickname);
}

std::string Contact::getPhoneNumber( void )
{
  return (_phoneNumber);
}

std::string Contact::getDarkestSecret( void )
{
  return (_darkestSecret);
}
