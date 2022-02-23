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

int PhoneBook::findId(std::string selection)
{
    int i;

    std::string str;
    i = 0;
    while (i < 8)
    {
        str = std::to_string(i);
        if (selection.compare(str) == 0)
            return (1);
        i++;        
    }
    return (0);
}

void PhoneBook::selectContact() {
    
    std::cout << "Select the contact from the ID" << std::endl;
    std::cout << "PhoneBook:";
    getline(std::cin >> std::ws, this->selection);
    if (findId(this->selection))
    {
        if (this->contactList->isEmpty(this->contactList[std::stoi(this->selection)]))
        {
            std::cout << "This Contact does not exit" << std::endl;
            selectContact();
        }    
        else
            this->contactList->getContact(this->contactList[std::stoi(this->selection)]);
    }
    else
        selectContact();
}

