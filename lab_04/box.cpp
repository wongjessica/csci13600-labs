/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab 4A

box.cpp asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.
*/

#include <iostream>
#include "box.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string box(int width, int height) {
    string outp = "";
    for (int y = 1; y <= width; y++) {
        for (int x = 1; x <= height; x++) {
            outp += "*";
        }
        outp += "\n";
    }
    return outp;
}
