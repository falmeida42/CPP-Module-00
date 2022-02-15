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
    void    showSelectedContact(Contact contact);
    Contact addContact(void);
    void    printContacts(Contact contact);
};

class   PhoneBook {
    
    private:
    Contact contactList[7];
    std::string selection;

    public:
    void showContact(void);
    void fillContacts();
    void searchContact();
    void selectContact();
    std::string  input;
};
#endif