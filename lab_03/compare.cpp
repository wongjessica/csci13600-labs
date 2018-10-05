/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab3C
The program compare.cpp asks the user to input two dates and reports which basin had higher elevation on that day by printing â€œEastâ€ or â€œWestâ€, or print â€œEqualâ€ if both basins are at the same level.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "compare.h"
using namespace std;

string compare(string date1, string date2)
{
	string rtn = "";
	string date;
    double eastSt, eastEl, westSt, westEl;
	ifstream fin("Current_Reservoir_Levels.tsv"); //opens input file stream
	if (fin.fail()) {
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); // exit if failed to open the file
	}
	string junk;
	getline(fin, junk); //reads the first line and stores it in junk
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
		if (date >= date1 && date <= date2) {
			rtn += date;
			if (eastEl < westEl) {
				rtn += " West";
			}
			if (eastEl > westEl) {
				rtn += " East";
			}
			if (eastEl == westEl) {
				rtn += " Equal";
			}
			rtn += "\n";
		}
	}
	fin.close();
	return rtn;
}
