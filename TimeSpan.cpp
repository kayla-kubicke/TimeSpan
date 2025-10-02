// Kayla Kubicke, CSS 342, TimeSpan
#include "TimeSpan.h"

// Default constructor
TimeSpan::TimeSpan()
{
	this->hours = 0;
	this->minutes = 0;
	this->seconds = 0;
}

// UPDATE: Send to setTime(...)?
TimeSpan::TimeSpan(double initialMinutes, double initialSeconds)
{
	this->hours = 0;
	this->minutes = initialMinutes;
	this->seconds = initialSeconds;
}

TimeSpan::TimeSpan(double initialHours, double initialMinutes, double initialSeconds)
{
	this->hours = initialHours;
	this->minutes = initialMinutes;
	this->seconds = initialSeconds;
}

// CHECK: If NOTE is correct.
// NOTE: 'const', in this position, ensures the member function will
// not alter the object being referenced.
// As to say, 'const' will protect the TimeSpan object
// from modification.
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

// UPDATE: Logic
bool TimeSpan::setTime(double newHours, double newMinutes, double newSeconds)
{
	this->hours = newHours;
	this->minutes = newMinutes;
	this->seconds = newSeconds;

	return true; // CHECK: Is this the way to write the boolean return; does it need 'if' wrap?
}

// io method
ostream& operator <<(ostream &outStream, const TimeSpan &time)
{
	outStream << "Hours: " << time.hours << ", Minutes: " << time.minutes << ", Seconds: " << time.seconds;
	return outStream;
}