#include <iostream>
using namespace std;
#include "clock.h"
#include <iomanip>

string period = "PM";
//defines functions declared in clock.h

void displayClock12(int hour, int minute, int second) {
	if (hour == 0) {
		hour = 12;
	}
	else if (hour == 12) {
		period = "PM";
	}
	else if (hour > 12) {
		hour -= 12;
		period = "PM";
	}
	// displays clock to output in format 
	cout << "**********************" << endl
		<< "*    12-Hour clock   *" << endl
		<< "*     " << setw(2) << setfill('0') << hour << ":"
		<< setw(2) << setfill('0') << minute << ":"
		<< setw(2) << setfill('0') << second << " " << period << "    " << "*" << endl
		<< "**********************" << endl;

}
	void displayClock24(int hour, int minute, int second) {
		cout << "**********************" << endl
			<<  "*   24-Hour clock    *" << endl
			<< "*     " << setw(2) << setfill('0') << hour << ":"
			<< setw(2) << setfill('0') << minute << ":"
			<< setw(2) << setfill('0') << second << " " << period << "    " << "*" << endl
			<< "**********************" << endl;

}
