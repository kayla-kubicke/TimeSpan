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
	double totalSeconds = static_cast<double>(0.0);

	// UPDATE: Update logic to use overloading operators

	//
	// START: Calculate totalSeconds
	totalSeconds += 60*60*newHours;
	totalSeconds += 60*newMinutes;
	totalSeconds += newSeconds;
	// END: Calculate totalSeconds
	//

	//
	// START: Conversion
	// Hours
	newHours = totalSeconds/(60*60);
	totalSeconds -= (int)newHours*60*60;

	// Minutes
	newMinutes = totalSeconds/60;
	totalSeconds -= (int)newMinutes*60;

	// Seconds
	newSeconds = round(totalSeconds);
	//END: Conversion
	//

	this->hours = newHours;
	this->minutes = newMinutes;
	this->seconds = newSeconds;

	return true;
}

//
// Operator overloaders

//
// Friend io method
ostream& operator <<(ostream &outStream, const TimeSpan &time)
{
	outStream << "Hours: " << time.hours << ", Minutes: " << time.minutes << ", Seconds: " << time.seconds;
	return outStream;
}