/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Maryash / Zamansky
Assignment: Lab1C

This code will determine whether or not the user input is a common year, or leap year.
*/

#include <iostream>
#include "leap.h"

using namespace std;

int main() {

    int input_year; //declares the variable input_year as an int

    cout << "Enter year: "; //print statement telling the user to enter a year

    cin >> input_year; //allows user to input a year

    if(input_year%4!=0) {
        cout << "Common year";
    }

    else if(input_year%100!=0) {
        cout << "Leap year";
    }

    else if(input_year%400!=0) {
        cout << "Common year";
    }
    else {
        cout << "Leap year";
    }


    return 0;

}
