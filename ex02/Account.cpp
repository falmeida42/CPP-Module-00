#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) {
  
    static int i;
    time_t now = time(0);

    i++;
    this->_accountIndex = i;
    this->_amount = initial_deposit;
    _nbAccounts = _accountIndex;
    _totalAmount += initial_deposit;

    std::cout << "[" << now << "] " << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl; 
};

Account::~Account(void) {
    time_t now = time(0);
    //std::cout << "[" << now << "] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl; 
};

int Account::getNbAccounts(void) { return (_nbAccounts); }
int Account::getTotalAmount(void) { return (_totalAmount); }
int Account::getNbDeposits(void) { return (_totalNbDeposits); }
int Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }

void    Account::displayAccountsInfos(void) {
    time_t now = time(0);

    std::cout << "[" << now << "] " << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
