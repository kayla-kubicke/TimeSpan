// Kayla Kubicke, CSS 342, TimeSpan

#include <iostream>
#include "TimeSpan.h"
using namespace std;

int main()
{
	// Create default TimeSpan object.
	TimeSpan defaultTimeSpan;

	cout << "Hours: " << defaultTimeSpan.getHours() << ", Minutes: " << defaultTimeSpan.getMinutes() << ", Seconds: " << defaultTimeSpan.getSeconds() << endl;
	cout << defaultTimeSpan << endl;
	defaultTimeSpan.setTime(45, 2.1, 7.0);
	cout << "Hours: " << defaultTimeSpan.getHours() << ", Minutes: " << defaultTimeSpan.getMinutes() << ", Seconds: " << defaultTimeSpan.getSeconds() << endl;
	cout << defaultTimeSpan << endl;


	float testFloat = static_cast<float>(2.5435856453);
	TimeSpan anotherTS(testFloat, 1);
	cout << "Hours: " << anotherTS.getHours() << ", Minutes: " << anotherTS.getMinutes() << ", Seconds: " << anotherTS.getSeconds() << endl;
	cout << anotherTS << endl;

	return 0;
}