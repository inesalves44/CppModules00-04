#include "Account.hpp"

#include <string>
#include <stack>
#include <map>
#include <iostream>
#include <cstring>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;



Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;

	_displayTimestamp();
	
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit;
	std::cout << ";created\n";

	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<< getNbAccounts() 
	<< ";total:" << getTotalAmount() 
	<< ";deposits:" << getNbDeposits() 
	<< ";withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex 
	<< ";amount:"<< checkAmount()
	<< ";deposits:"<< this->_nbDeposits
	<<";withdrawals:" << this->_nbWithdrawals
	<<"\n";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	this-_nbDeposits++;
	std::cout << ";amount:" << checkAmount()
	<<";nb_deposits:"<< this->_nbDeposits << "\n";

	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex 
		<< ";p_amount:" << checkAmount()
		<<"withdrawals:refuse\n";	
		return false;
	}
	std::cout << "index:" << this->_accountIndex 
	<< ";p_amount:" << checkAmount() 
	<<";withdrawals:"<< withdrawal;
	
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::cout << ";amount:" << checkAmount() 
	<< ";nb_withdrawals:" << this-> _nbWithdrawals << "\n";

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm* ltm = localtime(&now);  
	
	std::cout << "[" << 1900 + ltm->tm_year;
	if (ltm->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << ltm->tm_mon + 1;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << ltm->tm_sec << "]";
}


int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

 int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}


Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";closed\n";
}