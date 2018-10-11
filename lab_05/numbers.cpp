#include <iostream>
#include "numbers.h"

using std::cout;
using std::cin;
using std::endl;


//a
bool isDivisibleBy(int n, int d){
	return d != 0 && n % d == 0;
}

//b
bool isPrime(int n){
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++)
		if (isDivisibleBy(n, i)) return false;
	return true;
}

//c
int nextPrime(int n){
	int i = n + 1;
	while (!isPrime(i))
		i++;
	return i;
}

//d
int countPrimes(int a, int b){
	int cnt = 0;
	for (int i = a; i <= b; i++)
		if (isPrime(i)) cnt++;
	return cnt;
}

//e
bool isTwinPrime(int n){
	return isPrime(n) && (isPrime(n + 2) || isPrime(n - 2));
}

//f
int nextTwinPrime(int n){
	int i = n + 1;
	while (!isTwinPrime(i))
		i++;
	return i;
}

//g
int largestTwinPrime(int a, int b){
	for (int i = b; i > a; i--)
		if (isTwinPrime(i))
			return i;
	return -1;
}