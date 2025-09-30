// Kayla Kubicke, CSS 342, TimeSpan

#include "TimeSpan.h"

// Default constructor
TimeSpan::TimeSpan()
{
	this->hours = 0;
	this->minutes = 0;
	this->seconds = 0;
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