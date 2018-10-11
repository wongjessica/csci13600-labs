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
using std::endl;

int main(){
  
	cout << "isDivisibleBy(27, 3): " << isDivisibleBy(27, 3) << endl;
	cout << "isDivisibleBy(75, 8): " << isDivisibleBy(75, 8) << endl;
  
	cout << "isPrime(83): " << isPrime(83) << endl;
	cout << "isPrime(9): " << isPrime(9) << endl;
  
	cout << "nextPrime(14): " << nextPrime(14) << endl;
	cout << "nextPrime(17): " << nextPrime(17) << endl;
  
	cout << "countPrimes(1, 33): " << countPrimes(1, 33) << endl;
  
	cout << "isTwinPrime(17): " << isTwinPrime(17) << endl;
	cout << "isTwinPrime(21): " << isTwinPrime(21) << endl;
  
	cout << "nextTwinPrime(17): " << nextTwinPrime(17) << endl;
	cout << "nextTwinPrime(33): " << nextTwinPrime(33) << endl;
  
	cout << "largestTwinPrime(5, 18): " << largestTwinPrime(5, 18) << endl;
	cout << "largestTwinPrime(1, 31): " << largestTwinPrime(1, 31) << endl;
	cout << "largestTwinPrime(14, 16): " << largestTwinPrime(14, 16) << endl; //should return -1

	return 0;
}
