#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>

using namespace std;

class   Contact {

    public:

    string  test;
    char    firstName[512];
    char    lastName[512];
    char    nickName[512];
    char    darkestSecret[512];    
    int     phoneNumber;
    
};

class   PhoneBook{
    
    private:
        class Contact contactlist[8];
        

    public:
        
        char    prompt[512];
        int    FindLimit(char str[]);
        Contact ADD(void) const;
        void    SEARCH(int i);
        PhoneBook(void);
        ~PhoneBook(void);
        
    
};

#endif