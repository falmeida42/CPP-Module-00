#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {

    std::cout << "PhoneBook: ";
    std::cin >> this->prompt;

    if (strcasecmp(this->prompt, "ADD") == 0)
        ADD(this->contactlist[0]);
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

void    PhoneBook::ADD(Contact contact) {

    std::cout << "Add your first name: ";
    std::cin >> contact.firstName;
    std::cout << "Add your last name: ";
    std::cin >> contact.lastName;
    std::cout << "Add your nick name: ";
    std::cin >> contact.nickName;
    std::cout << "Add your number: ";
    std::cin >> contact.phoneNumber;

    std::cout << "Your name is: " << contact.firstName << std::endl;
    std::cout << "Your number is: " << contact.phoneNumber << std::endl;
    return;
}

class Contact PhoneBook::AddSomething(char *str) {

}

