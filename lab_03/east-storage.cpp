/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab3A
The program east-storage.cpp asks the user to input a string representing the date and prints out the east basin storage on that day
*/

#include <iostream>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv"); //opens input file stream
    if (fin.fail())
    {
        cerr << "File cannot be opened for reasons." << endl;
        exit(1); //exits if failed to open file
    }

    string junk, date, userDate;
    double eastSt, eastEl, westSt, westEl;
    getline(fin, junk);    //reads the first line and stores it in junk

    cout << "Enter a date: ";
    cin >> userDate;    //allows user to input date

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) //reads the file line by line
    {
        fin.ignore(INT_MAX, '\n');    //skips to the end of the line
        if (userDate == date)        //checks if the date entered by user matches with what's being read
        {
            cout << "East basin storage: " << eastSt << " billion gallons";
            break;    //breaks out of loop
        }
    }

    fin.close();    //closes file
    return 0;
}
