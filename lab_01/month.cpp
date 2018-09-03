/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Maryash / Zamansky
Assignment: Lab1D

This code allows the user to input a year and a month, the will tell the user how many days in that month
 */

#include <iostream>
using namespace std;

int main() {

    int thirty = 30;
    int thirty1 = 31;
    int input_year; //declares variable input_year as an int
    int input_month; //declares variable input_month as an int
    bool leap_year = input_year%400 ==0 || (input_year%4==0 && input_year%100 !=0);

    cout << "Enter year: "; //tells the user to input a year

    cin >> input_year; //allows user to input int year

    cout << "Enter month: "; //tells the user to input a month

    cin >> input_month; //allows user to input int month

	if (input_month == 2) {
		
		if((input_year%400 == 0) || (input_year % 4 == 0 && input_year%100!=0)) {
			cout << "29 days";
		}
		else {
			cout << "28 days";
		}
		
	}
	else if (input_month == 1 || input_month == 3 || input_month == 5 || input_month == 7 || input_month == 8 || input_month == 10 || input_month == 12) {
		cout << thirty1 << " days";
	}
	else {
		cout << thirty << " days";
	}

    return 0;

}
