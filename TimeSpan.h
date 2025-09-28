// @file TimeSpan.h
// Kayla Kubicke, CSS 342, TimeSpan

// NOTE: "Comments in the header file specify the methods."

//
class TimeSpan {
	private:
		double currentHours; // Can I add default values?
		double currentMinutes;
		double currentSeconds;

	public:
		// Default Constructor:
		// Precondition:
		// Postcondition:
		TimeSpan(); // Create TimeSpan object with (0,0,0).

		// Constructor:
		// Precondition:
		// Postcondition:
		TimeSpan(double initialSeconds); // FIX: overload; must accept int, float, and double.

		// Constructor:
		// Precondition:
		// Postcondition:
		TimeSpan(double initialMinutes, double initialSeconds); // FIX: overload; must accept int, float, and double.

		// Constructor:
		// Precondition:
		// Postcondition:
		// NOTE: Respect rounding requirements. "Round answer to nearest second (50.9 becomes 51)"
		TimeSpan(double initialHours, double initialMinutes, double initialSeconds); // FIX: overload; must accept int, float, and double.


		// Gets TimeSpan's hours.
		// Precondition:
		// Postcondition: Returns the hours.
		int getHours() const; // NOTE: 'const' methods cannot alter class's data members.

		// Gets TimeSpan's minutes.
		// Precondition:
		// Postcondition: Returns the minutes.
		int getMinutes() const;

		// Gets TimeSpan's seconds.
		// Precondition:
		// Postcondition: Returns the seconds.
		int getSeconds() const;

		bool setTime(double hours, double miniutes, double seconds);
}