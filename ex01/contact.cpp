#include "phonebook.hpp"

Contact Contact::addContact(void) {

    Contact instance;

    std::cout << "First Name:";
    getline(std::cin >> std::ws, instance.firstName);

    std::cout << "Last Name:";
    getline(std::cin >> std::ws, instance.lastName);

    std::cout << "Nick Name:";
    getline(std::cin >> std::ws, instance.nickName);

    std::cout << "Darkest Secret:";
    getline(std::cin >> std::ws, instance.darkestSecret);

    std::cout << "Phone number:";
    getline(std::cin >> std::ws, instance.phoneNumber);

    return (instance);
}

std::string    Contact::formatContact(std::string str)
{
    if (str.length() > 10)
        str.replace(9, str.length() - 9, ".");
    else
    return (str);
}

void    Contact::printContacts(Contact contact) {
    
    std::cout << formatContact(contact.firstName);
    std::cout << "|";
    std::cout << formatContact(contact.lastName);
    std::cout << "|";
    std::cout << formatContact(contact.nickName);
    std::cout << std::endl;
}