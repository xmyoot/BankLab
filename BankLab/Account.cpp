#include "Account.h"
#include <iostream>

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{		
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	//TODO: Add a message to the log
	std::string logMessage = std::to_string(numberOfPennies) + " has been deposited into your balance.";
	std::cout << "The message being logged to this account is: " << logMessage << std::endl;
	system("pause");
	addLogMessage(logMessage);
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	//TODO: Add a message to the log
	std::string logMessage = std::to_string(numberOfPennies) + " has been withdrawn from your balance.";
	std::cout << "The message being logged to this account is: " << logMessage << std::endl;
	system("pause");
	addLogMessage(logMessage);
}

Customer Account::getCustomer()
{
	return _accountOwner;
}

int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

void Account::addLogMessage(std::string _message)
{
	_log.push_back(_message);
}
