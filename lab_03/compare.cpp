/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab3C
The program compare.cpp asks the user to input two dates and reports which basin had higher elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level.
*/

#include <iostream>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <string>
using namespace std;

string compare(string date1, string date2)
{
    ifstream fin("Current_Reservoir_Levels.tsv"); //opens input file stream
    if (fin.fail())
    {
        cerr << "File cannot be opened for reasons." << endl;
        exit(1); //exits if failed to open file
    }

    string junk, date;
    string east = "East";
    string west = "West";
    string equal = "Equal";
    double eastSt, eastEl, westSt, westEl;
    getline(fin, junk);    //reads the first line and stores it in junk

    cout << "Enter starting date: ";
    cin >> date1;    //allows user to input starting date
    cout << "Enter ending date: ";
    cin >> date2;    //allows user to input ending date

    bool destination = false;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
    	if (date1 == date && !destination)
    	{
        destination = true;
    	}
    	if (destination)
    	{
            if(eastEl > westEl) {
                return east;
            }
            else if(westEl > eastEl) {
                return west;
            }
            else {
                return equal;
            }
    	}
    	if (date2 == date && destination)
    	{
        break;
    	}
    }

    fin.close();    //closes file
}
