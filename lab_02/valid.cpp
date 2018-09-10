/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab2A

The program valid.cpp allows the user to enter an integer, and if the integer is between 0-100 exclusive, the console will output the
square of that number. If it's 0 or less, or 100 or more, then the console will constantly tell the user to re-enter the integer.
*/

#include <iostream>

int main() {

    int input; //creates an integer with the name input
    std::cout << "Please enter an integer: " << std::endl; //tells the console to output a statement

    while(std::cin >> input) { //loop starts as long as the user enters something
        if (input > 99 || input < 1) { //if this is true
            std::cout << "Please re-enter: " << std::endl; //then the console will tell the user to re-enter
        }
        else { //but if not
            std::cout << "Number squared is " << input * input << std::endl; //then the console outputs the number squared
            break; //breaks out of the loop
        }
    }


    return 0; //to assure the code worked as it should've
}