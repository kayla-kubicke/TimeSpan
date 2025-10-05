// Kayla Kubicke, CSS 342, TimeSpan
// REMOVE
#include <iostream>
#include<cmath>
// REMOVE
#include "TimeSpan.h"
// REMOVE
using namespace std;
// REMOVE

//
// Constructors
TimeSpan::TimeSpan() // Default constructor
{
	this->hours = 0;
	this->minutes = 0;
	this->seconds = 0;
}

TimeSpan::TimeSpan(double initialMinutes, double initialSeconds)
{
	this->hours = 0;
	this->minutes = initialMinutes;
	this->seconds = initialSeconds;

	// NOTE: 'this' is a pointer.
	this->setTime(hours, initialMinutes, initialSeconds);
}

TimeSpan::TimeSpan(double initialHours, double initialMinutes, double initialSeconds)
{
	this->hours = initialHours;
	this->minutes = initialMinutes;
	this->seconds = initialSeconds;

	this->setTime(initialHours, initialMinutes, initialSeconds);
}

//
// Member Functions
int TimeSpan::getHours() const
{
	return hours;
}

int TimeSpan::getMinutes() const
{
	return minutes;
}

int TimeSpan::getSeconds() const
{
	return seconds;
}

bool TimeSpan::setTime(double newHours, double newMinutes, double newSeconds)
{
	seconds += round(60*60*newHours + 60*newMinutes);
	hours = seconds/(60*60);
	seconds -= hours*60*60;
	minutes = seconds/60;
	seconds -= minutes*60;

	return true;
}

//
// Operator overload methods
// UPDATE: remove &time if not used
TimeSpan TimeSpan::operator+(const TimeSpan &time) const
{

	return *this;
}

// TimeSpan& TimeSpan::operator-(const TimeSpan &time)
// {
// 	// what are we subtracting?
// 	// we use subtraction to update totalSeconds.
// 	return *this;
// }
// unary negation

// ==
// !=

TimeSpan& TimeSpan::operator+=(const TimeSpan &time)
{
	return *this;
}

TimeSpan& TimeSpan::operator-=(const TimeSpan &time)
{
	return *this;
}

//
// Friend io method
ostream& operator <<(ostream &outStream, const TimeSpan &time)
{
	outStream << "Hours: " << time.hours << ", Minutes: " << time.minutes << ", Seconds: " << time.seconds;
	return outStream;
}