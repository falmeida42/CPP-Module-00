#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>

class   Contact {

    private: 
    std::string    firstName;
    std::string    lastName;
    std::string    nickName;
    std::string    darkestSecret;
    std::string    phoneNumber;

    std::string formatContact(std::string str);

    public:
    Contact addContact(void);
    void    printContacts(Contact contact);
};

class   PhoneBook {
    
    private:
    Contact contactList[7];


    public:
    void fillContacts();
    void searchContact();
    std::string  input;
};
#endif