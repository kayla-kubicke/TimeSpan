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
	TimeSpan();

private:
	int hours;
	int minutes;
	int seconds;
};

#endif