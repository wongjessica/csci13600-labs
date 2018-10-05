/*
  Author: Jessica Wong
  Course: CSCI-136
  Instructor: Zamansky
  Assignment: Lab4E
  
  upper.cpp returns a string representing the top-right half of a square
*/

#include <iostream>
#include "upper.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string upper(int length) {
	string outp = "";
	for (int i = length; i > 0; i--) {
		outp += redo(i, "*");
	}
	return outp;
}
