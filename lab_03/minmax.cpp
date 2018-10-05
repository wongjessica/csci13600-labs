/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab3B
The program minmax.cpp outputs the minimum and maximum storage in East basin in 2016
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "minmax.h"
using namespace std;

double min_storage(){
	
	string date;
	double min = 100.0;
    	double eastSt, eastEl, westSt, westEl;
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); // exit if failed to open the file
	}
	string junk;
	getline(fin, junk); //reads the first line and stores it in junk
    	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { //reads the file line by line
		if(eastSt < min) {
			min = eastSt;
		}
	}
	fin.close();
	return min;
}

double max_storage(){
	
	string date;
	double max = 0.0;
    	double eastSt, eastEl, westSt, westEl;
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); // exit if failed to open the file
	}
	string junk;
	getline(fin, junk); //reads the first line and stores it in junk	
    	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { //reads the file line by line
		if (max == 0.0) {
			max = eastSt;
			continue;
		}
		if(eastSt > max) {
			max = eastSt;
		}
	}
	fin.close();
	return max;
}
