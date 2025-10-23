// Tevaen Kenerly  
// 9/20/25 

#include <iostream>
using namespace std;
#include "clock.h"
#include "menu.h"

// defining main 
int main() {
	int hour = 12, minute = 0, second = 0;
	bool running = true;
	// while loop for when the clock is running 
	while (running) {
		menu();
		int choice = userChoice();
		// using switch instead of if-else statements switch statements for users input
		switch (choice) {
		    case 1:
				hour = addHour(hour);
				break;
			case 2:
				minute = addMinute(minute);
				break;
			case 3:
				second = addSecond(second);
				break;
			case 4: 
				running = false;
				break;
			default: 
				cout << "Invalid choice";
				break;
		}
		// function to display the clocks 
		displayClock12(hour, minute, second);
		displayClock24(hour, minute, second);
	}
	return 0;
}