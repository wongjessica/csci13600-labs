/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab2C

The program edit-array.cpp creates an array with 10 slots, and each slot has value "1". Then the user gets to input an index and a value, and it changes the value at that index of the array
*/

#include <iostream>

int main() {

    int myData[10];

    int i;
    int v;

    for(int n = 0; n < 10; n++) { //assigns value "1" to every spot in the array
        myData[n] = 1;
    }

    do {
        for(int i=0;i<10;i++) {
            std::cout << myData[i] << " ";
        }
        std::cout << "\nInput index: " << std::endl;
        std::cin >> i;
        if (i>=0 && i<10) {
            std::cout << "Input value: " << std::endl;
            std::cin >> v;
            myData[i] = v;
        }
    }

    while(i>=0 && i<10);

    std::cout << "Index out of range. Exit." << std::endl;

    return 0; //to assure the code worked as it should've
}