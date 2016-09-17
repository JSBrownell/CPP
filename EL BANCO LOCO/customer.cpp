//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015

#include <iostream>
#include <string>
#include "customer.h"
using namespace std;

void Customer::view()
{
	cout << "Name: " << this->name << endl;
	cout << "Account#: " << this->accountID << endl;
}

Customer Customer::operator= (const Customer& cst)//overloaded assignment operator
{
	this->name = cst.name;
	this->accountID = cst.accountID;
	return *this;
}


