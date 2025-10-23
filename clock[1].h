#pragma once
#include <iostream>
using namespace std;
#ifndef clock_h
#define clock_h
extern string period;

// creates clock functions 

void displayClock12(int hour, int minute, int second);
void displayClock24(int hour, int minute, int second);

#endif
