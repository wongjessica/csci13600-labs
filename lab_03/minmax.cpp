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
#include minmax.h
using namespace std;

double min_storage() {
	ifstream fin("Current_Reservoir_Levels.tsv"); //opens input file stream
	if (fin.fail())
	{
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); //exits if failed to open file
	}

	string junk, date, userDate;
	double eastSt, eastEl, westSt, westEl, max, min;
	getline(fin, junk);	//reads the first line and stores it in junk

	max = 0.0;	//assigning a default value of zero to the variables
	min = 0.0;
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) //reads the file line by line
	{
		fin.ignore(INT_MAX, '\n');	//skips to the end of the line
		if (eastSt > max)	//if the eastSt value is greater than the max
		{				//then the max becomes the eastSt value
			max = eastSt;
		}
		if (min == 0.0)	//an if statement used only once to set the min value to eastSt
		{
			min = eastSt;
		}
		if (min > eastSt) //if the previous min value is greater than the current eastSt value
		{				  //the min value becomes the current eastSt value
			min = eastSt;
		}
	}
  return min;
	fin.close();	//closes file
	cin.get();
}

double max_storage() {
	ifstream fin("Current_Reservoir_Levels.tsv"); //opens input file stream
	if (fin.fail())
	{
		cerr << "File cannot be opened for reasons." << endl;
		exit(1); //exits if failed to open file
	}

	string junk, date, userDate;
	double eastSt, eastEl, westSt, westEl, max, min;
	getline(fin, junk);	//reads the first line and stores it in junk

	max = 0.0;	//assigning a default value of zero to the variables
	min = 0.0;
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) //reads the file line by line
	{
		fin.ignore(INT_MAX, '\n');	//skips to the end of the line
		if (eastSt > max)	//if the eastSt value is greater than the max
		{				//then the max becomes the eastSt value
			max = eastSt;
		}
		if (min == 0.0)	//an if statement used only once to set the min value to eastSt
		{
			min = eastSt;
		}
		if (min > eastSt) //if the previous min value is greater than the current eastSt value
		{				  //the min value becomes the current eastSt value
			min = eastSt;
		}
	}
  return max;
	fin.close();	//closes file
	cin.get();
}
