/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab2D

The program fibonacci.cpp sums up two previous integers and outputs it. It prints all Fibonacci numbers from F(0) to F(59).

The program outputs the Fibonacci sequence F(0) -> F(59) smoothly until a certain point, the values increase really fast towards the positive direction, but at a certain point the numbers
get very large and start to become negative.
There seems to be a constant switch between very large negative and positive outputs towards the end. I think it is because as an "int" data type, its scope is very limited, where its values can range from -2,147,483,648
to 2,147,483,648. The program runs until there is a point where the result is simply too large to store in the "int" data type, so it goes to the most negative value and increases from there. In essence,
when the numbers get too big, the program loops around to the smallest possible integer value.
*/

#include <iostream>

int main() {

    int fib[60]; //initializes an array with a length of 60

    fib[0] = 0; //initializes index 0 with value 0
    fib[1] = 1; //initializes index 1 with value 1

    std::cout << fib[0] << std::endl; //prints index 0
    std::cout << fib[1] << std::endl; //prints index 1

    int i;
    do {
        for (i = 2; i < 60; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
            std::cout << fib[i] << std::endl;
        }
    }
    while(i < 60);

    return 0; //to assure the code worked as it should've
}