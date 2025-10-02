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
	// Default constructor
	// Creates TimeSpan object, TimeSpan(0, 0, 0).
	TimeSpan();

	// NOTE: double can accept int or float.
	TimeSpan(double seconds);
	TimeSpan(double minutes, double seconds);
	TimeSpan(double hours, double minutes, double seconds);
	

	int getHours() const; // Returns the number of hours (int).
	int getMinutes() const; // Returns the number of minutes (int).
	int getSeconds() const; // Returns the number of seconds (int).

	// Returns true if time is set successfully.
	bool setTime(double hours, double minutes, double seconds);

private:
	int hours;
	int minutes;
	int seconds;
};

#endif