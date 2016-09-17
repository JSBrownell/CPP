//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 3 -- Overloaded Date program
//15 November, 2015

#include "date.h"

//setters & getters -- 
void Date::setDay(int da)
{
	this->day = da;
}
void Date::setMonth(int mo)
{
	this->month = mo;
}
void Date::setYear(int yr)
{
	this->year = yr;
}

int Date::getDay() const
{
	return this->day;
}
int Date::getMonth() const
{
	return this->month;
}
int Date::getYear() const
{
	return this->year;
}

//need overloaded operator member functions here
Date Date::operator=(const Date &dateObj)
{
	this->month = dateObj.month;
	this->day = dateObj.day;
	this->year = dateObj.year;
	return *this;
}
bool Date::operator==(const Date &dateObj)
{
	return ((this->getDay() == dateObj.getDay())
		&& (this->getMonth() == dateObj.getMonth())
		&& (this->getYear() == dateObj.getYear()));
}

bool Date::operator >(const Date& dateObj)  //compares parameter to calling object
{
	bool result = false;
	if (dateObj.getYear() < this->getYear())
		result = true;
	else if ((dateObj.getYear() == this->getYear()) && (dateObj.getMonth() < this->getMonth()))
		result =true;
	else if ((dateObj.getYear() == this->getYear()) && (dateObj.getMonth() == this->getMonth()) && (dateObj.getDay() < this->getDay()))
		result = true;
	return result;
}

Date Date::operator-(const Date& dateObj)  //subtracts parameter from calling object and returns another Date object representing the difference
{
	int callingTotalDays = (this->getDay()) + (30 * (this->getMonth())) + (365 * (this->getYear()));
	int argTotalDays = (dateObj.getDay()) + (30 * (dateObj.getMonth())) + (365 * (dateObj.getYear()));
	int difference = callingTotalDays - argTotalDays;
	int years = difference / 365;
	int remainderDays = difference % 365;
	int months = remainderDays / 30;
	int days;
	if (months == 12) //I inserted this if statement becuase I didn't like the results I was getting when the remainders >= 360 days
	{					//I decided I'd rather see "11/29/..." than "12/4/...". 
		months = 11;	//It's artificial, but I believe it provides more natural-looking results while still being close enough for the purposes of this assignment.
		days = 29;
	}
	else 
	days = remainderDays % 30;

	Date diffDate;
	diffDate.day = days;
	diffDate.month = months;
	diffDate.year = years;
	
	return diffDate;
}

ostream& operator<<(ostream &out, const Date &dateObj)
{
	out << dateObj.getMonth() << "/" << dateObj.getDay() << "/" << dateObj.getYear();
	return out;
}

istream& operator>>(istream &in, Date &dateObj)
{
	int d, m, y;
	cout << "Enter month(1 - 12): ";
	in >> m;
	cout << "Enter day(1 to maximum days in month): ";
	in >> d;
	cout << "Enter year(>= 1800): ";
	in >> y;
	dateObj.setDay(d);
	dateObj.setMonth(m);
	dateObj.setYear(y);
	return in;
}

