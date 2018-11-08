#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "box.h"
#include "frame.h"
#include "invert-half.h"
#include "invert.h"
#include "kernel.h"
#include "pixelate.h"
#include "scale.h"
#include "func.h"

// allows reading files by filename (used for testing)
void readImage(std::string filename, int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	std::ifstream instr;
	instr.open(filename);

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>std::ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();

	return;
}


int main(){
	invert();
	invert_half();
	box();
	frame();
	scale();
	pixelate();
	kernel();

	return 0;
}
