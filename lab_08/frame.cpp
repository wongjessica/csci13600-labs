#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "func.h"
#include "frame.h"

using std::cout;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ws;
using std::endl;

void frame() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"

	int out[MAX_H][MAX_W];
	
	for(int row = 0; row < h; row++) 
		for(int col = 0; col < w; col++) 
			out[row][col] = img[row][col];

	for(int col = w / 4; col < 3 * w / 4; col++)
		out[h / 4][col] = out[3 * h / 4][col] = 255;
	for(int row = h / 4; row < 3 * h / 4; row++)
		out[row][w / 4] = out[row][3 * w / 4] = 255;

	writeImage("frame.pgm", out, h, w);

}
