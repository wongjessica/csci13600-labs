/*	Author: Jessica Wong
	Course: CSCI-133
	Instructor: Zamansky
	Assignment: Lab #5
	Task A:
	If n is divisible by d, the function should return true, otherwise return false.
	Task B:
	Should return true if n is a prime, otherwise return false
	Task C:
	Returns the smallest prime greater than n.
	Task D:
	Returns the number of prime numbers in the interval a ≤ x ≤ b
	Task E:
	Determines whether or not its argument is a twin prime
	Task F:
	Returns the smallest twin prime greater than n
	Task G:
	Returns the largest twin prime in the range a ≤ N ≤ b, if none, return -1
*/

#include <iostream>
#include "numbers.h"

using std::cout;
using std::cin;
using std::endl;


//Task A
bool isDivisibleBy(int n, int d){
	return d != 0 && n % d == 0;
}

//Task B
bool isPrime(int n){
	if (n <= 1) { 
		return false; 
	}
	for (int i = 2; i * i <= n; i++) {
		if (isDivisibleBy(n, i)) { 
			return false; 
		} 
	}
	return true;
}

//Task C
int nextPrime(int n){
	int i = n + 1;
	while (!isPrime(i)) {
		i++;
	}
	return i;
}

//Task D
int countPrimes(int a, int b){
	int count = 0;
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) { 
			count++; 
		}
	}
	return count;
}

//Task E
bool isTwinPrime(int n){
	return isPrime(n) && (isPrime(n + 2) || isPrime(n - 2));
}

//Task F
int nextTwinPrime(int n){
	int i = n + 1;
	while (!isTwinPrime(i))
		i++;
	return i;
}

//Task G
int largestTwinPrime(int a, int b){
	for (int i = b; i > a; i--)
		if (isTwinPrime(i))
			return i;
	return -1;
}
