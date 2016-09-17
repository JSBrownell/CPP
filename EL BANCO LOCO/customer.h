//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 4 - El Banco Loco
//11 December, 2015
//This program creates Savings and Checking account objects using the abstract Account class as the base class. 
//[I wish my bank had such high interest rates for savings accounts. :)]

//N.B.  I chose to use double rather than float for all of the designated floating point values, and I also used double for consistency's sake
//in cases where an int would have worked such as the Service Charge and Minimum Balance in the checking class.

//Thank you for such a meaty assignment.  I actually had fun writing the classes and making everything work together.


#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer{

private:
	string name;
	string accountID;	
	
public:
	Customer()
	{
		this->accountID = "";
		this->name = "";
	}
	Customer(string cstName, string cstAccountID)
	{
		this->name = cstName;
		this->accountID = cstAccountID;
	}
	
	virtual void view();

	Customer operator= (const Customer&);

};
#endif