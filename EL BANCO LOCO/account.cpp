//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015

#include <iostream>
#include <string>
#include "account.h"
using namespace std;

double Account::getBalance()
{
	return this->balance;
}

void Account::makeDeposit(double depAmount)
{
	this->balance += depAmount;
}

bool Account::makeWithdrawal(double wdAmount)
{
	bool result = true;
	this->balance -= wdAmount;
	return result;
}

void Account::view()
{
	this->cust.view();
	cout <<"Current balance: $ "<< this->balance;
}

