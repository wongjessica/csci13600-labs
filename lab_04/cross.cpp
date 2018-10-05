/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky
Assignment: Lab 4C
cross.cpp takes as a parameter size, and returns a string representing a diagonal cross of that dimension.
*/

#include <iostream>
#include "cross.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string cross(int size) {
	string outp = "";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (j == i || j == (size - i - 1)) {
				outp += "*";
			}
			else {
				outp += " ";
			}
		}
		outp += "\n";
	}
	return outp;
}
