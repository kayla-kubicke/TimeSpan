// Kayla Kubicke, CSS 342, TimeSpan

#include <iostream>
#include "TimeSpan.h"
using namespace std;

int main()
{
	// Create default TimeSpan object.
	TimeSpan defaultTimeSpan;

	cout << "Hours: " << defaultTimeSpan.getHours() << ", Minutes: " << defaultTimeSpan.getMinutes() << ", Seconds: " << defaultTimeSpan.getSeconds() << endl;

	return 0;
}