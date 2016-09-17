//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015

#ifndef SAVINGS_H
#define SAVINGS_H

#include <iostream>
#include "customer.h"
#include "account.h"
using namespace std;

class Savings: public Account{

protected:
	double interestRate;

public:
	Savings() : Account()
	{
		this->interestRate = 0.0;
	}
	Savings(Customer cs, double currBal, double intRate ) : Account(currBal, cs)
	{	
		this->interestRate = intRate;
	}

	virtual void makeDeposit(double) ;
	virtual bool makeWithdrawal(double)  ;
	virtual void view() ;

	virtual void adjustBalance();

};
#endif