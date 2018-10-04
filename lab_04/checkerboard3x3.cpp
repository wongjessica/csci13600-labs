/*
  Author: Jessica Wong
  Course: CSCI-133
  Instructor: Zamansky
  Assignment: Lab4G

checkerboard3x3.cpp takes in width/height, and outputs a 3x3 checkerboard
*/

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string checkerboard3x3(int width, int height){
  
	string outp;
	string aster = "*";
	string start = "*"; 
	
	for (int r = 0; r < height; r++){
    
		if (r % 3 == 0) start == "*" ? start = " " : start = "*";
    
		aster = start;
    
		for (int c = 0; c < width; c++){
      
			//toggles character every third column
			if (c % 3 == 0)	ch == "*" ? aster = " " : aster = "*";
			outp += aster;
		}
		outp += "\n";
	}

	return outp;
}
