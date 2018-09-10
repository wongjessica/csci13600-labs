/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab2B

The program print-interval.cpp allows the user to enter two integers. Then the numbers between the integers
 will be printed out, ending at the largest integer less than U (the second number inputted)
*/

#include <iostream>

int main() {

    int L; //declares L as an int
    int U; //declares U as an int

    std::cout << "Please enter L: " << std::endl;
    std::cin >> L;
    std::cout << "Please enter U: " << std::endl;
    std::cin >> U;

    for(int i = L; i < U; i++) {
        std::cout << i << " " << std::endl;
    }



    return 0; //to assure the code worked as it should've
}