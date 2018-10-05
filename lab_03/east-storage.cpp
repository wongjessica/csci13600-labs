/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky
Assignment: Lab3A
The program east-storage.cpp asks the user to input a string representing the date and prints out the east basin storage on that day
*/

#include <iostream>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <string>
#include east-storage.h
using namespace std;

double east_storage(string s){
    ifstream fin("Current_Reservoir_Levels.tsv"); //opens input file stream
    if (fin.fail())
    {
        cerr << "File cannot be opened for reasons." << endl;
        exit(1); //exits if failed to open file
    }

    string junk, date;
    double eastSt, eastEl, westSt, westEl;
    getline(fin, junk);    //reads the first line and stores it in junk

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) //reads the file line by line
    {
        if (s == date)        //checks if the date entered by user matches with what's being read
        {
            fin.close();    //closes file
            return eastSt;
        }
    }
}
