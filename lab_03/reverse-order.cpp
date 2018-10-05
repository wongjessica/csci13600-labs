/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab3D
The program reverse-order.cpp asks the user to input two dates (earlier date then later date).
The program should report the West basin elevation for all days in the interval in the reverse chronological
order (from the later date to the earlier).
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "reverse-order.h"
using namespace std;

string reverse(string date1, string date2)
{
	string junk;
	string rtn = "";
	string date;
    double eastSt, eastEl, westSt, westEl;
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); // exit if failed to open the file
	}
    
	getline(fin, junk);
    
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
    {
		if (date >= date1 && date <= date2) 
        {
			string temp = date + " " + std::to_string(westElevation).substr(0,6) + " ft\n";
			rtn.insert(0, temp);
		}
	}
	fin.close();
	return rtn;
}
