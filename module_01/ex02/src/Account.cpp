#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << "\033[31m" << this->_accountIndex << "\033[0m" << ";" ;
	std::cout << "amount:" << "\033[31m" << this->_amount << "\033[0m";
	std::cout << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << "\033[31m" << this->_accountIndex << "\033[0m" << ";" ;
	std::cout << "amount:" << "\033[31m" << this->_amount << "\033[0m";
	std::cout << ";closed" << std::endl;
};


int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << "\033[31m" << getNbAccounts() << "\033[0m" << ";" ;
	std::cout << "total:" << "\033[31m" << getTotalAmount() << "\033[0m" << ";";
	std::cout << "deposits:" << "\033[31m" << getNbDeposits() << "\033[0m" << ";";
	std::cout << "withdrawal:" << "\033[31m" << getNbWithdrawals() << "\033[0m" << std::endl;
}

void  Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << "\033[31m" << this->_accountIndex << "\033[0m" << ";" ;
	std::cout << "p_amount:" << "\033[31m" << this->_amount << "\033[0m" << ";";
	this->_amount += deposit;
	std::cout << "deposit:" << "\033[31m" << deposit << "\033[0m" << ";";
	std::cout << "amount:" << "\033[31m" << this->_amount << "\033[0m" << ";";
	_totalAmount += deposit;
	_nbDeposits += 1;
	std::cout << "nb_deposits:" << "\033[31m" << _nbDeposits << "\033[0m" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << "\033[31m" << this->_accountIndex << "\033[0m" << "\033[0m" << ";" ;
		std::cout << "p_amount:" << "\033[31m" << this->_amount << "\033[0m" << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "index:" << "\033[31m" << this->_accountIndex << "\033[0m" << ";" ;
	std::cout << "p_amount:" << "\033[31m" << this->_amount << "\033[0m" << ";";
	std::cout << "withdrawal:" << "\033[31m" << withdrawal << "\033[0m" << ";";
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << "\033[31m" << this->_amount << "\033[0m" << ";";
	_nbWithdrawals += 1;
	std::cout << "nb_withdrawals:" << "\033[31m" << _nbWithdrawals << "\033[0m" << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << "\033[31m" << this->_accountIndex << "\033[0m" << ";" ;
	std::cout << "amount:" << "\033[31m" << this->_amount << "\033[0m" << ";";
	std::cout << "deposits:" << "\033[31m" << this->_nbDeposits << "\033[0m" << ";";
	std::cout << "withdrawals:" << "\033[31m" << this->_nbWithdrawals << "\033[0m" << std::endl;
}
void	Account::_displayTimestamp( void )
{
	time_t t;

	time(&t);
	std::string str = ctime(&t);
	str.erase(str.length() - 1);
	std::cout << "[" << str << "] ";
}
