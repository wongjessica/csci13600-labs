#include <iostream>
#include "recursion.h"

using std::cout;
using std::endl;
using std::string;

int main(){
	cout << "Task A" << endl;
	cout << printRange(1, 10) << endl;
	cout << printRange(-2, 10) << endl;
	cout << printRange(7, 3) << endl;

	cout << endl << "Task B" << endl;
	cout << sumRange(1, 3) << endl;

	cout << endl << "Task C" << endl;
	int size = 10;
	int *arr = new int[size]; // allocate array dynamically
	arr[0] = 12;
	arr[1] = 17;
	arr[2] = -5;
	arr[3] = 3;
	arr[4] = 7;
	arr[5] = -15;
	arr[6] = 27;
	arr[7] = 5;
	arr[8] = 13;
	arr[9] = -21;

	int sum1 = sumArray(arr, size); // Add all elements
	cout << "Sum is " << sum1 << endl;  // Sum is 43

	int sum2 = sumArray(arr, 5); // Add up first five elements
	cout << "Sum is " << sum2 << endl;  // Sum is 34

	delete[] arr;         // deallocate it

	cout << endl << "Task D" << endl;
	cout << isAlphanumeric("ABCD") << endl;        // true (1)
	cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
	cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)

	cout << endl << "Task E" << endl;
	cout << nestedParens("((()))") << endl;      // true (1)
	cout << nestedParens("()") << endl;          // true (1)
	cout << nestedParens("") << endl;            // true (1)

	cout << nestedParens("(((") << endl;         // false (0)
	cout << nestedParens("(()") << endl;         // false (0)
	cout << nestedParens(")(") << endl;          // false (0)
	cout << nestedParens("a(b)c") << endl;       // false (0)

	cout << endl << "Task F" << endl;
	int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
	cout << divisible(prices, 9) << endl;
	
	return 0;
}
