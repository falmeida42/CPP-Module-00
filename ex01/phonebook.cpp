#include "phonebook.hpp"

void PhoneBook::fillContacts() {
    
    Contact instance;
    static int i;

    if (i == 7)
        i = 0;
    this->contactList[i++] = instance.addContact();
}

void PhoneBook::searchContact() {

    int i;

    i = 0;
    while (i < 7)
    {
        std::cout << i << "|";
        this->contactList[i].printContacts(this->contactList[i]);
        i++;
    }
}