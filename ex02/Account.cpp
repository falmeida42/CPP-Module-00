#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return (_nbAccounts); }
int Account::getTotalAmount(void) { return (_totalAmount); }
int Account::getNbDeposits(void) { return (_totalNbDeposits); }
int Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }

Account::Account(int initial_deposit) {
  
    static int i;
    time_t now = time(0);

    this->_accountIndex = i;
    this->_amount = initial_deposit;
    _nbAccounts = _accountIndex + 1;
    _totalAmount += initial_deposit;
    i++;

    std::cout << "[" << now << "] " << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl; 
};

Account::~Account(void) {
    time_t now = time(0);
    std::cout << "[" << now << "] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl; 
};

void Account::displayStatus() const {
    time_t now = time(0);
    std::cout << "[" << now << "] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::displayAccountsInfos(void) {
    time_t now = time(0);
    std::cout << "[" << now << "] " << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit(int deposit) {
    time_t now = time(0);
    int p_amount = this->_amount;
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    std::cout << "[" << now << "] " << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    time_t now = time(0);
    int p_amount = this->_amount;
    _totalNbWithdrawals++;
    if (withdrawal > p_amount)
    {
        std::cout << "[" << now << "] " << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    this->_nbWithdrawals++;
    this->_totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    std::cout << "[" << now << "] " << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}