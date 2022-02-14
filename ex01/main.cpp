#include "phonebook.hpp"

int main() {
    
    
    PhoneBook instance;
    
    while (instance.input.compare("EXIT"))
    {
        
        std::cout << "PhoneBook:";
        getline(std::cin >> std::ws, instance.input);
        if (instance.input.compare("ADD") == 0)
            instance.fillContacts();
        else if (instance.input.compare("SEARCH") == 0)
           instance.searchContact();
        else if (instance.input.compare("EXIT") == 0)
            std::cout << "GOOD BYE" << std::endl;
        else
            std::cout << "The program only accepts ADD, SEARCH and EXIT" << std::endl;
    }
    
    
    return 0;
}