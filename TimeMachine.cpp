// Kayla Kubicke, CSS 342, TimeSpan

#include <iostream>
#include "TimeSpan.h"
using namespace std;

int main()
{
	// //
	// // START: TimeSpan() Test
	// // Expected output: Hours: 0, Minutes: 0, Seconds: 0
	// TimeSpan defaultObject;
	// string outputDefault = "Hours: " + to_string(defaultObject.getHours()) + ", Minutes: " + to_string(defaultObject.getMinutes()) + ", Seconds: " + to_string(defaultObject.getSeconds());

	// if(outputDefault == "Hours: 0, Minutes: 0, Seconds: 0")
	// {
	// 	cout << "defaultObject Passed\n" << endl;
	// }
	// else
	// {
	// 	cout << "!!!defaultObject Failed!!!\n" << endl;
	// }
	// // END: TimeSpan() Test
	// //

	// //
	// // START: TimeSpan(1, 2, 3) Test
	// // Output: Hours: 1, Minutes: 2, Seconds: 3
	// // Expected totalSeconds: 3723
	// TimeSpan simple(1, 2, 3);
	// string outputSimple = "Hours: " + to_string(simple.getHours()) + ", Minutes: " + to_string(simple.getMinutes()) + ", Seconds: " + to_string(simple.getSeconds());

	// if(outputSimple == "Hours: 1, Minutes: 2, Seconds: 3")
	// {
	// 	cout << "simple Passed\n" << endl;
	// }
	// else
	// {
	// 	cout << "!!!simple Failed!!!\n" << endl;
	// }
	// // END: TimeSpan(1,2,3) Test
	// //

	// //
	// // START: TimeSpan(1.5, 4, -10) Test
	// // Output: Hours: 1, Minutes: 33, Seconds: 50
	// // Expected totalSeconds: 5630
	// TimeSpan mixed(1.5, 4, -10);
	// string outputMixed = "Hours: " + to_string(mixed.getHours()) + ", Minutes: " + to_string(mixed.getMinutes()) + ", Seconds: " + to_string(mixed.getSeconds());

	// if(outputMixed == "Hours: 1, Minutes: 33, Seconds: 50")
	// {
	// 	cout << "mixed Passed \n" << endl;
	// }
	// else
	// {
	// 	cout << "!!!mixed Failed!!!\n" << endl;
	// 	// cout << mixed << endl;
	// }
	// // END: TimeSpan(1.5, 4, -10) Test
	// //

	// //
	// // START: TimeSpan(1, -380, 24.5) Test
	// // Output: Hours:-5, Minutes: -19, Seconds: -36
	// // Expected totalSeconds: -19175.5
	// TimeSpan anotherMixed(1, -380, 24.5);
	// string outputAnotherMixed = "Hours: " + to_string(anotherMixed.getHours()) + ", Minutes: " + to_string(anotherMixed.getMinutes()) + ", Seconds: " + to_string(anotherMixed.getSeconds());

	// if(outputAnotherMixed == "Hours: -5, Minutes: -19, Seconds: -36")
	// {
	// 	cout << "anotherMixed Passed\n" << endl;
	// }
	// else
	// {
	// 	cout << "!!!anotherMixed Failed!!!\n" << endl;
	// }
	// // END:  TimeSpan(1, -380, 24.5) Test
	// //

	// //
	// // START: TimeSpan(-40,50, -20) Test
	// // Output: Hours: -39, Minutes: -10, Seconds: -20
	// // Expected totalSeconds: -141020
	// TimeSpan negative(-40, 50, -20);
	// string outputNegative = "Hours: " + to_string(negative.getHours()) + ", Minutes: " + to_string(negative.getMinutes()) + ", Seconds: " + to_string(negative.getSeconds());

	// if(outputNegative == "Hours: -39, Minutes: -10, Seconds: -20")
	// {
	// 	cout << "negative Passed\n" << endl;
	// }
	// else
	// {
	// 	cout << "!!!negative Failed!!!\n" << endl;
	// }
	// // END: TimeSpan(-40,50, -20) Test
	// //

	// //
	// // START: TimeSpan(7, 3) Test
	// // Output: Hours: 0, Minutes: 7, Seconds: 3
	// // Expected totalSeconds: 423
	// TimeSpan noHours(7, 3);
	// string outputNoHours = "Hours: " + to_string(noHours.getHours()) + ", Minutes: " + to_string(noHours.getMinutes()) + ", Seconds: " + to_string(noHours.getSeconds());

	// if(outputNoHours == "Hours: 0, Minutes: 7, Seconds: 3")
	// {
	// 	cout << "noHours Passed\n" << endl;
	// }
	// else
	// {
	// 	cout << "!!!noHours Failed!!!\n" << endl;
	// }
	// // END: TimeSpan(7, 3) Test
	// //

	// //
	// // START:Overload tests
	// TimeSpan addTime = noHours + negative;
	// cout << addTime << endl;
	// TimeSpan subtractTime = noHours - negative;
	// cout << subtractTime << endl;

	// TimeSpan addOppTime = noHours;
	// addOppTime += negative;
	// cout << addOppTime << endl;

	// TimeSpan subOppTime = noHours;
	// subOppTime -= negative;
	// cout << subOppTime << endl;
	// // END: Overload tests
	// //

	return 0;
}