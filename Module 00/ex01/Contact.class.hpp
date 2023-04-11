#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "includeLibs.hpp"

class Contact
{
  private:

    int         _index;
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

  public:

    Contact( void );
    ~Contact( void );

    void setIndex( int index );
    void setFirstName( void );
    void setLastName( void );
    void setNickname( void );
    void setPhoneNumber( void );
    void setDarkestSecret( void );
    
    int         getIndex( void );
    std::string getFirstName( void );
    std::string getLastName( void );
    std::string getNickname( void );
    std::string getPhoneNumber( void );
    std::string getDarkestSecret( void );
};

#endif
