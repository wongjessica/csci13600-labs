#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "func.h"
#include "pixelate.h"

using std::cout;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ws;
using std::endl;

void pixelate() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];

	for (int row = 0; row < h; row += 2)
		for (int col = 0; col < w; col += 2){
			int avg = (img[row][col] + img[row + 1][col] + img[row][col + 1] + img[row + 1][col + 1]) / 4;
			out[row][col] = avg;
			out[row][col + 1] = avg;
			out[row + 1][col] = avg;
			out[row + 1][col + 1] = avg;
		}

	// and save this new image to file "outImage.pgm"
	writeImage("pixel.pgm", out, h, w);

}
