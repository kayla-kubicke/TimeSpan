// Kayla Kubicke, CSS 342, TimeSpan
// REMOVE
#include <iostream>
// REMOVE
#include "TimeSpan.h"
// REMOVE
using namespace std;
// REMOVE


//
// START: Constructors
TimeSpan::TimeSpan()
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
// END: Constructors
//

//
// START: Getters/Setters
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

bool TimeSpan::setTime(const double newHours, const double newMinutes, const double newSeconds)
{
	double totalSeconds = static_cast<double>(0);

	totalSeconds = 60*60*newHours + 60*newMinutes + newSeconds;
	hours = totalSeconds/(60*60);
	totalSeconds -= 60*60*hours;
	minutes = totalSeconds/60;
	totalSeconds -= 60*minutes;
	seconds = round(totalSeconds);

	return true;
}
// END: Getters/Setters
//

//
// START: Operator Overloads
// Addition
TimeSpan TimeSpan::operator+(const TimeSpan) const
{
	return *this;
}

// Subtraction
TimeSpan TimeSpan::operator-(const TimeSpan) const
{
	return *this;
}

// Increment
TimeSpan& TimeSpan::operator+=(const TimeSpan)
{

	return *this;
}

// Decrement
TimeSpan& TimeSpan::operator-=(const TimeSpan)
{
	return *this;
}

// Equal
bool TimeSpan::operator==(const TimeSpan &time) const
{
	return (this->hours == time.hours && this->minutes == time.minutes && this->seconds == time.seconds);
}

// Not Equal
bool TimeSpan::operator!=(const TimeSpan &time) const
{
	return !(*this == time);
}

// Negation
TimeSpan& TimeSpan::operator-()
{
	this->hours = -hours;
	this->minutes = -minutes;
	this->seconds= -seconds;

	return *this;
}
// END: Operator Overloads
//

//
// START:Friend io
ostream& operator<<(ostream &outStream, const TimeSpan &time)
{
	outStream << "Hours: " << time.hours << ", Minutes: " << time.minutes << ", Seconds: " << time.seconds;
	return outStream;
}

// !!!: ADD >>
// END; Friend io
//