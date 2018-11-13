/*
Author: Jessica Wong
Course: CSCI-133
Instructor: Maryash / Zamansky
Assignment: Lab 8

Creates new files with picture edits of a cat.

A - invert colors
B - invert colors in the right
C - add a white box
D - one pixel thick frame
E - scale 200%
F - pixelate
G - bonus:kernel method image filtering

*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr >> ws).peek() == '#') {
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


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width, string fileN) {
	ofstream ostr;
	string ext = ".pgm";
	fileN += ext;
	ostr.open(fileN.c_str());
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

void writeImageScale(int image[MAX_H * 2][MAX_W * 2], int height, int width, string fileN) {
	ofstream ostr;
	string ext = ".pgm";
	fileN += ext;
	ostr.open(fileN.c_str());
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}


void invert(int image[MAX_H][MAX_W], int &h, int &w) {
	int out[MAX_H][MAX_W];
	for (int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			out[row][col] = 255 - image[row][col];
		}
	}
	writeImage(out, h, w, "task-a");
}

void invert_half(int image[MAX_H][MAX_W], int &h, int &w) {
	int out[MAX_H][MAX_W];
	for (int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			if (col < (w / 2) + 1) {
				out[row][col] = image[row][col];
			}
			else {
				out[row][col] = 255 - image[row][col];
			}
		}
	}
	writeImage(out, h, w, "task-b");
}

void box(int image[MAX_H][MAX_W], int &h, int &w) {
	int out[MAX_H][MAX_W];
	for (int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			if (row >= (h / 4) && row <= (3 * (h / 4)) && col >= (w / 4) && col <= (3 * (w / 4))) {
				out[row][col] = 255;
			}
			else {
				out[row][col] = image[row][col];
			}
		}
	}
	writeImage(out, h, w, "task-c");
}

void frame(int image[MAX_H][MAX_W], int &h, int &w) {
	int out[MAX_H][MAX_W];
	for (int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			if (row >= (h / 4) && row <= (3 * (h / 4)) && col >= (w / 4) && col <= (3 * (w / 4))) {
				if ((row == (h / 4) || row == (3 * (h / 4))) || (col == (w / 4) || col == (3 * (w / 4)))) {
					out[row][col] = 255;
				}
				else {
					out[row][col] = image[row][col];
				}
			}
			else {
				out[row][col] = image[row][col];
			}
		}
	}
	writeImage(out, h, w, "task-d");
}

void scale(int image[MAX_H][MAX_W], int &h, int &w) {
	int out[MAX_H * 2][MAX_W * 2];
	for (int row = 0; row < h * 2; row += 2) {
		for (int col = 0; col < w * 2; col += 2) {
			int temp = image[row / 2][col / 2];

			out[row][col] = temp;
			out[row + 1][col] = temp;
			out[row][col + 1] = temp;
			out[row + 1][col + 1] = temp;
		}
	}
	writeImageScale(out, h * 2, w * 2, "task-e");
}

void pixelate(int image[MAX_H][MAX_W], int &h, int &w) {
	int out[MAX_H][MAX_W];
	for (int row = 0; row < h; row += 2) {
		for (int col = 0; col < w; col += 2) {
			int temp = image[row][col];
			temp += image[row + 1][col];
			temp += image[row][col + 1];
			temp += image[row + 1][col + 1];
			temp = temp / 4;

			out[row][col] = temp;
			out[row + 1][col] = temp;
			out[row][col + 1] = temp;
			out[row + 1][col + 1] = temp;
		}
	}
	writeImage(out, h, w, "task-f");
}

void kernel(int image[MAX_H][MAX_W], int &h, int &w) {
	int out[MAX_H][MAX_W];
	for (int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			if (row == 0 || row == h - 1 || col == 0 || col == w - 1) {
				out[row][col] = 0;
			}
			else {
				int a = image[row - 1][col - 1];
				int b = image[row - 1][col];
				int c = image[row - 1][col + 1];
				int d = image[row][col - 1];
				int e = image[row][col];
				int f = image[row][col + 1];
				int g = image[row + 1][col - 1];
				int h = image[row + 1][col];
				int i = image[row + 1][col + 1];

				int temp = (g + (2 * h) + i) - (a + (2 * b) + c);
				if (temp < 0) {
					temp = 0;
				}
				else if (temp > 255) {
					temp = 255;
				}
				out[row][col] = temp;
			}
		}
	}
	writeImage(out, h, w, "task-g");
}

int main() {
	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w);

	writeImage(img, h, w, "outImage");
	invert(img, h, w);
	invert_half(img, h, w);
	box(img, h, w);
	frame(img, h, w);
	scale(img, h, w);
	pixelate(img, h, w);
	kernel(img, h, w);
}
