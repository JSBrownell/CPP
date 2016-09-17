//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015

#include <iostream>
#include <string>
#include "account.h"
#include "checking.h"
using namespace std;

const double SERVICE_CHARGE = 10.00;
const double MIN_BALANCE = 1000.00;

void Checking::makeDeposit(double dpAmount)
{
	Account::makeDeposit(dpAmount);
}

bool Checking::makeWithdrawal(double wdAmount)
{
	bool wdOK;
	if (wdAmount <= this->balance)
		wdOK = Account::makeWithdrawal(wdAmount);
	else if (this->overdraftProtection)
		wdOK = Account::makeWithdrawal(wdAmount);
	else
		wdOK = false;
	return wdOK;
}

void Checking::adjustBalance()
{
	if (this->balance < MIN_BALANCE)
		this->balance -= SERVICE_CHARGE;
}

void Checking::view()
{
	cout << "Checking Account" << endl;
	this->Account::view();
}
