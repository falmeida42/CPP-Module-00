#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

class   Contact {

    public:

    char    firstName[512];
    char    lastName[512];
    char    nickName[512];
    int     phoneNumber;
    char    darkestSecret[512];
};

class   PhoneBook {
    
    private:
        class Contact contactlist[8];

    public:
        char    prompt[512];
        
    PhoneBook(void);
    ~PhoneBook(void);
    void    ADD(Contact contact);
    class Contact AddSomething(char *str);
};

#endif
