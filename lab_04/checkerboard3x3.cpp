/*
  Author: Jessica Wong
  Course: CSCI-136
  Instructor: Zamansky
  Assignment: Lab4G

checkerboard3x3.cpp takes in width/height, and outputs a 3x3 checkerboard
*/

#include <iostream>
#include "checkerboard3x3.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

string checkerboard3x3(int width, int height)
{
 	string outp = "";
	bool dest = true;
	for (int i = 0; i < height; i++) 
	{
		if (dest) 
		{
			outp += redo2(width, "*", " ");
		}
		else 
		{
			outp += redo2(width, " ", "*");
		}
		if ((i + 1) % 3 == 0) 
		{
			dest = !dest;
		}
	}
	return outp;
}
