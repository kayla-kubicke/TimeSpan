// Kayla Kubicke, CSS 342, TimeSpan

// Include guards; old method 
#ifndef TIMESPAN_H
#define TIMESPAN_H
// Preprocessor directive, newer method
// #pragma once
#include <iostream>
using namespace std;

class TimeSpan
{
	friend ostream& operator <<(ostream &outStream, const TimeSpan &time);
public:
	//
	// START: Constructors
	TimeSpan();
	TimeSpan(double seconds);
	TimeSpan(double minutes, double seconds);
	TimeSpan(double hours, double minutes, double seconds);
	// END: Constructors
	//
	
	//
	// START: Getters/Setters
	int getHours() const; // Returns the number of hours (int).
	int getMinutes() const; // Returns the number of minutes (int).
	int getSeconds() const; // Returns the number of seconds (int).
	bool setTime(const double hours, const double minutes, const double seconds); // Returns true if time is set successfully.
	// END: Getters/Setters
	//

	//
	// START:Operator overloads
	TimeSpan operator+(const TimeSpan) const;
	TimeSpan operator-(const TimeSpan) const;
	TimeSpan& operator+=(const TimeSpan);
	TimeSpan& operator-=(const TimeSpan);
	bool operator==(const TimeSpan &time) const;
	bool operator!=(const TimeSpan &time) const;
	TimeSpan& operator-();
	// END:Operator overloads
	//

private:
	int hours;
	int minutes;
	int seconds;
};

#endif