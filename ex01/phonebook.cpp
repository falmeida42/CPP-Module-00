#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {

    static int i;
    int j;

    j = 0;
    std::cout << "PhoneBook: ";
    std::cin >> this->prompt;
    if (strcmp(this->prompt, "ADD") == 0)
    {
        if (i == 7)
            i = 0;
        this->contactlist[i++] = ADD();
    }
    else if (strcmp(this->prompt, "SEARCH") == 0)
    {
        SEARCH(i);
    }
    else
        std::cout << "ADD DELET" << std::endl;

    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

Contact    PhoneBook::ADD(void) const {

    Contact contact;
    
    std::cout << "Add your first name: ";
    std::cin >> contact.firstName;
    std::cout << "Add your last name: ";
    std::cin >> contact.lastName;
    std::cout << "Add your nick name: ";
    std::cin >> contact.nickName;
    std::cout << "Add your number: ";
    std::cin >> contact.phoneNumber;

    return (contact);
}

void    PhoneBook::SEARCH(int i) {
    
    static int j;
    int k;

    FindLimit(this->contactlist[k].firstName);
    if (j < 7)
    {
        k = 0;
        while (k < i)
        {
            std::cout << k << "|" << this->contactlist[k].firstName << "|" << this->contactlist[k].lastName << "|" << this->contactlist[k].nickName << std::endl;
            k++;
        }
    }
    else
    {
        k = 0;
        while (k < 7)
        {
            std::cout << k << "|" << this->contactlist[k].firstName << "|" << this->contactlist[k].lastName << "|" << this->contactlist[k].nickName << std::endl;
            k++;
        }
    }
    j++;
}

int    PhoneBook::FindLimit(char str[]) {
    
    string str1 = "AIIAOSDIASHDIOAHSDIOHSA";

    // if (str1.length() > 10)
    // {
        str1.replace(9, str1.length() - 9, ".");
        std::cout << str1 << std::endl;
    //}
    return (0);
}