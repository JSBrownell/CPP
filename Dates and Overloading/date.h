//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 3 -- Overloaded Date program
//15 November, 2015
//This program demonstrates a copy constructor plus overloaded operators.


#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {

private:
	int month, day, year;

public:
	Date() // no-arg constructor, initializing variables to valid but incorrect values
	{
		month = 0;
		day = 0;
		year = 1000;
	}
	//need copy constructor here
	
	Date(const Date &dateObj)
	{
		this->month = dateObj.month;
		this->day = dateObj.day;
		this->year = dateObj.year;
	}

	//setters & getters (probably not strictly necessary since we're working almost exclusively with member functions & operators)
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay()const;
	int getMonth()const;
	int getYear()const;

	//need overloaded operator member functions here
	Date operator=(const Date&);
	bool operator==(const Date&);  //compares parameter to calling object
	bool operator>(const Date&);  //compares parameter to calling object
	Date operator-(const Date&);  //subtracts parameter from calling object and returns another Date object representing the difference

	friend ostream& operator<<(ostream &, const Date &);
	friend istream& operator>>(istream &, Date &);

};

#endif