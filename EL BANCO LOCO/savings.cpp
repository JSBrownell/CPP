//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015

#include "savings.h"
#include "account.h"
#include <iostream>
#include <string>
using namespace std;

const double REWARD = 100.00;

void Savings::makeDeposit(double dpAmount) 
{
	if (dpAmount > 9999.99)
	dpAmount= dpAmount+ REWARD;
		Account::makeDeposit(dpAmount);
}

bool Savings::makeWithdrawal(double wdAmount) 
{
	bool wdOK;
	if (wdAmount <= this->balance)
		wdOK = Account::makeWithdrawal(wdAmount);
	else
		wdOK = false;
	return wdOK;
}

void Savings::view() 
{
	cout<< "Savings Account"<<endl;
	this->Account::view();
}

void Savings::adjustBalance()
{
	double interest;
	interest = (this->balance) * (this->interestRate);
	this->balance += interest;	
}