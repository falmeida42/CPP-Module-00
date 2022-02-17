#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) {
    static int index;

    this->_accountIndex = index++;
    this->_amount = initial_deposit;
    //std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "created" << std::endl; 
}

Account::~Account(void) {
    //std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed" << std::endl; 
}

void Account::displayAccountsInfos(void) {

}