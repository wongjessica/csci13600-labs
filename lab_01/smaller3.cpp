/*
    Author: Jessica Wong
    Course: CSCI-136
    Instructor: Maryash / Zamansky
    Assignment: Lab1B

    This code will determine the smaller of 3 integers, inputted by user
    */

    #include "smaller3.h"
    #include <iostream>
    using namespace std;

    int main() {

        int user_input1; //declares user_input1 as an int
        int user_input2; //declares user_input2 as an int
        int user_input3; //declares user_input3 as an int

        cout << "Enter the first number: "; //system print statement

        cin >> user_input1; //allows the user to input an int

        cout << "Enter the second number: "; //system print statement

        cin >> user_input2; //allows the user to input an int

        cout << "Enter the third number: "; //system print statement

        cin >> user_input3; //allows the user to input an int

        if(user_input1>user_input2 && user_input2>user_input3) {
            cout << "The smaller of the three is " << user_input3;
        }
        else if(user_input2>user_input3 && user_input3>user_input1) {
            cout << "The smaller of the three is " << user_input1;
        }
        else if(user_input3>user_input2 && user_input2>user_input1){
            cout << "The smaller of the three is " << user_input1;
        }
        else if(user_input2>user_input1 && user_input1>user_input3){
            cout << "The smaller of the three is " << user_input3;
        }
        else {
            cout << "The smaller of the three is " << user_input2;
        }

        return 0;

    }
