#include "phonebook.hpp"

void PhoneBook::fillContacts() {
    
    Contact     instance;
    static int  i;
    if (i == 8)
        i = 0;
    this->contactList[i++] = instance.addContact();
}

void PhoneBook::searchContact() {

    int i;

    i = 0;
    while (i <= 7)
    {
        std::cout << i << "|";
        this->contactList[i].getContactList(this->contactList[i]);
        i++;
        if (this->contactList->isEmpty(this->contactList[i]))
            break ;
    }
    this->selectContact();
}

int PhoneBook::findId(std::string str)
{
    if (str.find('0') != str.npos || str.find('1') != str.npos || str.find('2') != str.npos || str.find('3') != str.npos
            || str.find('4') != str.npos || str.find('5') != str.npos || str.find('6') != str.npos || str.find('7') != str.npos)
        return (1);
    else
        return (0);

}

void PhoneBook::selectContact() {
    
    std::cout << "Select the contact from 0 to 7" << std::endl;
    std::cout << "PhoneBook:";
    getline(std::cin >> std::ws, this->selection);
    if (findId(this->selection))
    {
        if (this->contactList->isEmpty(this->contactList[std::stoi(this->selection)]))
        {
            std::cout << "This Contact Doesn't exit" << std::endl;
            selectContact();
        }    
        else
            this->contactList->getContact(this->contactList[std::stoi(this->selection)]);
    }
    else
        selectContact();
}

