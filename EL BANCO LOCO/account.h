//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "customer.h"
using namespace std;

class Account{

protected:
	double balance;
	Customer cust;

public:
	Account() : cust()
	{
		this->balance = 0.0;
	}
	Account(double currBalance, Customer c)
	{
		this->balance = currBalance;
		this->cust = c; //using handy-dandy overloaded assignment operator since it's already written and ready to go
	}

	double getBalance();
	virtual void makeDeposit(double );
	virtual bool makeWithdrawal(double );
	virtual void view();

	virtual void adjustBalance() =0;  //pure virtual function 

};
#endif