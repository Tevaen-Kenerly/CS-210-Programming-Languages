using namespace std;
#include <iostream>
#include "menu.h"
// implements menu related functions 

// displays menu options to output
void menu() {
	cout << "***************************" << endl;
	cout << "* 1 - Add One Hour        *" << endl;
	cout << "* 2 - Add One Minute      *" << endl;
	cout << "* 3 -  Add One Second     *" << endl;
	cout << "* 4 - Exit Program        *" << endl;
	cout << "***************************" << endl;
}

int userChoice() {
	int choice;
    cout << "Add one: ";
    cin >> choice;
    return choice;
}

int addHour(int hour) {
	return (hour + 1) % 24;
}
int addMinute(int minute) {
	return (minute + 1) % 60;
}
int addSecond(int second) {
	return (second + 1) % 60;
}
