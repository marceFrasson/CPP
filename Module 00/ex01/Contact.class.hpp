#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include "includeLibs.hpp"

class Contact
{
  private:

    int         index;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

  public:

    Contact( void );
    ~Contact( void );

    void setIndex(int index);
    void setFirstName(void);
    void setLastName(void);
    void setNickname(void);
    void setPhoneNumber(void);
    void setDarkestSecret(void);
    
    int         getIndex(void);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
};

#endif