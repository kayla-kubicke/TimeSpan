// Kayla Kubicke, CSS 342, TimeSpan

// Include guards; old method 
#ifndef TIMESPAN_H
#define TIMESPAN_H
// Preprocessor directive, newer method
// #pragma once


class TimeSpan
{
public:
	// Default constructor
	// Creates TimeSpan object, TimeSpan(0, 0, 0).
	TimeSpan();

	int getHours() const; // Returns the number of hours (int).
	int getMinutes() const; // Returns the number of minutes (int).
	int getSeconds() const; // Returns the number of seconds (int).

	// bool setTime(double hours, doulbe minutes, double seconds);

private:
	int hours;
	int minutes;
	int seconds;
};

#endif