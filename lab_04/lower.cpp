/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab 4D

lower.cpp returns a string representing the bottom-left half of a square
*/ 

#include <iostream>
#include "lower.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string lower(int length) {
	string outp = "";
	for (int i = 1; i <= length; i++) {
		outp += redo(i, "*");
	}
	return outp;
}
