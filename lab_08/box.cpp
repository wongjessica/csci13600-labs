#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "func.h"
#include "box.h"

using std::cout;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ws;
using std::endl;

void box() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); 

	int out[MAX_H][MAX_W];
	
	for(int row = 0; row < h; row++) 
		for(int col = 0; col < w; col++) 
			out[row][col] = img[row][col];

	for(int row = h / 4; row < 3 * h / 4; row++)
		for(int col = w / 4; col < 3 * w / 4; col++)
			out[row][col] = 255;

	writeImage("box.pgm", out, h, w);

}
