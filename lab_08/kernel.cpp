#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "func.h"
#include "kernel.h"

using std::cout;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ws;
using std::endl;

void kernel() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];

	for (int row = 1; row < h - 1; row++)
		for (int col = 1; col < w - 1; col++){
			int e = (img[row + 1][col - 1] + 2*img[row + 1][col] + img[row + 1][col + 1]) - (img[row - 1][col - 1] + 2*img[row - 1][col] + img[row - 1][col + 1]);
			if (e > 255) e = 255;
			if (e < 0) e  = 0;
			out[row][col] = e;
		}

	// and save this new image to file "outImage.pgm"
	writeImage("kernel.pgm", out, h, w);

}
