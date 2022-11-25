#include "Contact.class.hpp"

Contact::Contact( void )
{
  return ;
}

Contact::~Contact( void )
{
  return ;
}

void Contact::setIndex(int index)
{
  this->index = index + 1;
}

void Contact::setFirstName(void)
{
  std::string input;

  input = "";
  while (input == "")
    std::getline( std::cin, input );
  this->firstName = input;
}

void Contact::setLastName(void)
{
  std::string input;

  input = "";
  while (input == "")
    std::getline( std::cin, input );
  this->lastName = input;
}

void Contact::setNickname(void)
{
  std::string input;

  input = "";
  while (input == "")
    std::getline( std::cin, input );
  this->nickname = input;
}

void Contact::setPhoneNumber(void)
{
  std::string input;

  input = "";
  while (input == "")
    std::getline( std::cin, input );
  this->phoneNumber = input;
}

void Contact::setDarkestSecret(void)
{
  std::string input;

  input = "";
  while (input == "")
    std::getline( std::cin, input );
  this->darkestSecret = input;
}

int Contact::getIndex(void)
{
  return (this->index);
}

std::string Contact::getFirstName(void)
{
  return (this->firstName);
}

std::string Contact::getLastName(void)
{
  return (this->lastName);
}

std::string Contact::getNickname(void)
{
  return (this->nickname);
}

std::string Contact::getPhoneNumber(void)
{
  return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
  return (this->darkestSecret);
}
