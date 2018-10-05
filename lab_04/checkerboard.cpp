/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab 4B

checkerboard.cpp prints a checkerboard with the width and height that the user inputs
*/ 

#include <iostream>
#include "checkerboard.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string checkerboard(int width, int height)
{
    
	string outp;
    
	for (int h = 0; h < height; h++) 
    { 
		for (int w = 0; w < width; w = w + 2)
        { 
			if (h % 2 == 0)
            {
				if (w == width - 1) 
                { 
                    outp = outp + "*"; 
                }
				else 
                { 
                    outp = outp +  "* ";
                }
			}
			else
            {
				if (w == width - 1)
                {
                    outp += " "; 
                }
				else 
                {
                    outp += " *";
                }
			}
		}
		outp += "\n";
	}

	return outp;
}
