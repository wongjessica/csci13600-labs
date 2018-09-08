/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Maryash / Zamansky
Assignment: Lab1A

This code will determine the smaller integer of 2 integers the person inputs.
*/

#include <iostream>
using namespace std;

int main() {

    int user_input1;
    int user_input2;

    cout << "Enter the first number: ";

    cin >> user_input1;

    cout << "Enter the second number: ";

    cin >> user_input2;

    if(user_input1>user_input2) {
        cout << "The smaller of the two is " << user_input2;
    }
    else {
        cout << "The smaller of the two is " << user_input1;
    }

    return 0;

}
