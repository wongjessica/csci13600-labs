/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab 4A

box.cpp asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.
*/

#include <iostream>

string box(int width, int height) {
    for (int y = 1; y <= width; y++) {
        for (int x = 1; x <= height; x++) {
            cout << "*" << endl;
        }
        cout << endl;
    }
}
