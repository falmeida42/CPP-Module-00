#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip> 

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
    void    getContact(Contact contact);
    void    getContactList(Contact contact);
    int     isEmpty(Contact contact);
};

class   PhoneBook {
    
    private:
    Contact contactList[8];
    std::string selection;

    
    int findId(std::string selection);
    
    public:
    void showContact(void);
    void fillContacts();
    void searchContact();
    void selectContact();
    std::string  input;
};
#endif