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
        std::cout << std::setw(10);
        if (str.length() > 10)
            str.replace(9, str.length() - 9, ".");
    return (str);
}

void    Contact::getContactList(Contact contact) {
    
    std::cout << formatContact(contact.firstName);
    std::cout << "|";
    std::cout << formatContact(contact.lastName);
    std::cout << "|";
    std::cout << formatContact(contact.nickName);
    std::cout << std::endl;
}

void    Contact::getContact(Contact contact) {

    std::cout << "First Name: " << contact.firstName << std::endl;
    std::cout << "Last Name: " << contact.lastName << std::endl;
    std::cout << "Nick Name: " << contact.nickName << std::endl;
    std::cout << "Dark Secret: " << contact.darkestSecret << std::endl;
    std::cout << "Phone Number: " << contact.phoneNumber << std::endl;
}

int Contact::isEmpty(Contact contact)
{
    return (contact.firstName.empty());
}