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
#include <climits>
#include <fstream>
#include <string>
#include reverse-order.h
using namespace std;

string reverse(string date1, string date2)
{
    ifstream fin("Current_Reservoir_Levels.tsv"); //opens input file stream
    if (fin.fail())
    {
        cerr << "File cannot be opened for reasons." << endl;
        exit(1); //exits if failed to open file
    }

    string junk, date;
    double eastSt, eastEl, westSt, westEl;

    cout << "Enter earlier date: ";
    cin >> date1;    //allows user to input starting date
    cout << "Enter later date: ";
    cin >> date2;    //allows user to input ending date
    
    int size = -1;
    while (getline(fin, junk))
    {
        size++;
    }
    fin.clear();
    fin.seekg(0, ios::beg);
    
    getline(fin,junk);
    
    int count = 0;
    string* westDate = new string[size];
    double* westElevation = new double[size];
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');
        westDate[count] = date;
        westElevation[count] = westEl;
        count++;
    }
    bool destination = false;
    for (int i = count-1; size >= 0; i--)
    {
        if (date2 == westDate[i] && !destination)
        {
            destination = true;
        }
        if (destination)
        {
            cout << westDate[i] << " " << westElevation[i] << "\n";
        }
        if (date1 == westDate[i] && destination)
        {
            break;
        }
    }

    fin.close();    //closes file
    return 0;
}
