//Brownell, Jessica
//CSIT 840, Fall 2015
//Assignment 2 - Toll Program
//18 October, 2015

#include <iostream>
#include "toll.h"

//I've included iostream twice, once in each .cpp file since it's used in both files.  
//Is this a good practice, a bad practice, or simply a matter of style?

using namespace std;

int TollBooth::m_nCourseCount = 0;

TollBooth::TollBooth()
{
	cout << "Now creating an uninitialized course element ....\n";
}

int TollBooth::getCourseCount()
{
	return m_nCourseCount;
}	

void TollBooth::setInputs() //set data for each course
{
	int totalEntered; //local variable
	cout << "How many students entered the room?  ";
	cin >> totalEntered;
	cout << "How many students paid?  ";//per instructions, assume both entries are positive integers & do not need to be validated.
	cin >> m_nPayingStus;
	while (m_nPayingStus > totalEntered)
	{
		cout << "*** Invalid input: More paying than entered!***" << endl;
		cout << "How many students entered the room?  ";
		cin >> totalEntered;
		cout << "How many students paid?  ";
		cin >> m_nPayingStus;
	}
	m_nDeadBeatStus = totalEntered - m_nPayingStus;
	m_nCourseCount++;
}

int TollBooth::getNumStudents()
{
	return (m_nDeadBeatStus + m_nPayingStus);	//I have to say that I love being able to return the results of an expression without having to declare another local variable.  
}												//Hooray for simplicity.

int TollBooth::getNumDeadBeats()
{
	return m_nDeadBeatStus;
}

double TollBooth::calcTollCollected()
{
	return (m_nPayingStus * TOLLAMT);
}

