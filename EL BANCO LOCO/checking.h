//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015


#ifndef CHECKING_H
#define CHECKING_H

#include <iostream>
#include<string>
#include "account.h"
#include "customer.h"
using namespace std;

class Checking: public Account {

protected:
	bool overdraftProtection;

public:
	Checking()
	{
		this->overdraftProtection = false;
	}
	Checking(Customer cs, double currBal, bool protection) : Account(currBal, cs)
	{
		this->overdraftProtection = protection;
	}

	virtual void makeDeposit(double );
	virtual bool makeWithdrawal(double);
	virtual void adjustBalance();
	virtual void view();

};
#endif
