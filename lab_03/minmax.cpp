/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab3B
The program minmax.cpp outputs the minimum and maximum storage in East basin in 2016
*/

#include <iostream>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <string>
#include "minmax.h"
using namespace std;

double min_storage(){
	
	string date;
	double min = 100.0;
	double eastStorage, eastElevation, westStorage, westElevation;
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); // exit if failed to open the file
	}
	string line;
	getline(fin, line);
	while(fin >> date >> eastStorage >> eastElevation >> westStorage >> westElevation) {
		if(eastStorage < min) {
			min = eastStorage;
		}
	}
	fin.close();
	return min;
}

double max_storage(){
	
	string date;
	double max = 0.0;
	double eastStorage, eastElevation, westStorage, westElevation;
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); // exit if failed to open the file
	}
	string line;
	getline(fin, line);	
	while(fin >> date >> eastStorage >> eastElevation >> westStorage >> westElevation) {
		if (max == 0.0) {
			max = eastStorage;
			continue;
		}
		if(eastStorage > max) {
			max = eastStorage;
		}
	}
	fin.close();
	return max;
}
