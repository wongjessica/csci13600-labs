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

    int user_input1; //declares user_input1 as an int
    int user_input2; //declares user_input2 as an int

    cout << "Enter the first number: "; //system print statement

    cin >> user_input1; //allows the user to input an int

    cout << "Enter the second number: "; //system print statement

    cin >> user_input2; //allows the user to input another int

    if(user_input1>user_input2) { 
        cout << "The smaller of the two is " << user_input2;
    }
    else {
        cout << "The smaller of the two is " << user_input1;
    }

    return 0;

}