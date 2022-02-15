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
    this->selectContact();
}

void PhoneBook::showContact(void) {
    
    this->contactList[std::stoi(this->selection)].printContacts(this->contactList[std::stoi(this->selection)]);
}

void PhoneBook::selectContact() {
    std::cout << "Select the contact from 0 to 7" << std::endl;
    std::cout << "PhoneBook:";
    getline(std::cin >> std::ws, this->selection);
    showContact();
}

