// @file TimeSpan.cpp
// Kayla Kubicke, CSS 342, TimeSpan
#include "TimeSpan.h"

// FIX: All constructors must accept int, float, and double.
// FIX: All constructors convert given primitive types to int with correct rounding.
TimeSpan::TimeSpan()
{
	setTime(0.0, 0.0, 0.0);
}

TimeSpan::TimeSpan(double initialSeconds)
{
	setTime(0.0, 0.0, initialSeconds);
}

TimeSpan::TimeSpan(double initialMinutes, double initialSeconds) 
{
	setTime(0.0, initialMinutes, initialSeconds);
}

TimeSpan::TimeSpan(double initialHours, double initialMinutes, double initialSeconds)
{
	setTime(initialHours, initialMinutes, initialSeconds);
}

int getHours()
{
	return currentHours;
}

int getMinutes()
{
	return currentMinutes;
}

int getSeconds()
{
	return currentSeconds;
}

// FIX: Add calculations.
bool setTime(double hours, double minutes, double seconds)
{
	currentHours = hours;
	currentMinutes = minutes;
	currentSeconds = seconds;
}