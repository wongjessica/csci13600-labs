/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab3C
The program compare.cpp asks the user to input two dates and reports which basin had higher elevation on that day by printing â€œEastâ€ or â€œWestâ€, or print â€œEqualâ€ if both basins are at the same level.
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

    string junk, date, date1, date2;
    double eastSt, eastEl, westSt, westEl;
    getline(fin, junk);    //reads the first line and stores it in junk

    bool destination = false;
    string str;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        if (date1 == date && !destination)
        {
        destination = true;
        }
        if (destination)
        {
            if(eastEl > westEl) {
                str.append(date);
                str.append("East\n");
            }
            else if(westEl > eastEl) {
                str.append(date);
                str.append"West\n");
            }
            else {
                str.append(date);
                str.append("Equal\n");
            }
        }
        if (date2 == date && destination)
        {
        break;
        }
    }

    fin.close();    //closes file
    return str;
}
