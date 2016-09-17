#ifndef TOLL_H
#define TOLL_H

class TollBooth{

private:
	static int m_nCourseCount;
	int m_nPayingStus, m_nDeadBeatStus;

public:
	const float TOLLAMT = 0.50; //constant for toll amount
	static int getCourseCount(); //called multiple times by non-member functions from main, so must be public

	TollBooth();

	void setInputs();	//called by a function in main, not by a member function, so must be public
	int getNumStudents(); //ditto
	int getNumDeadBeats();//""
	double calcTollCollected(); // ""
	//If inputCourseData, outputCourseInfo, and displayAvgToll were public member functions, 
	//then the four functions above could be private 'helper' functions.
};

#endif
