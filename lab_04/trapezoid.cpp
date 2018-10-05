/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky 
Assignment: Lab 4F
trapezoid.cpp returns as a triangle representing an upside-down trapezoid of given width and height. 
However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!

*/ 

#include <iostream>
#include "trapezoid.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string trapezoid(int width, int height)
{
	string outp = "";
	if (width/2 < height) 
	{
		outp = "Impossible shape!\n";
	}
	else 
	{
		for (int i = 0; i < height; i++) 
		{
			int aster = width - (2 * i);
			outp += redo(i, " ").substr(0, i);
			outp += redo(aster, "*").substr(0, aster);
			outp += redo(i, " ");
		}
	}
	return outp;
}
