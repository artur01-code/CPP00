#include "Account.hpp"

Account::Account(int initial_deposit)
{
	_totalNbDeposits = initial_deposit;
};

Account::~Account()
{

};

int Account::getNbAccounts()
{
	return (_nbAccounts);
};

int Account::getTotalAmount()
{
	return (_totalAmount);
};

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
};

int Account::getNbWithdrawals() 
{
	return (_totalNbWithdrawals);
};

// void Account::displayAccountInfos()
// {
// 	std::cout <<
// }