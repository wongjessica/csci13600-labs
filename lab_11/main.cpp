#include <iostream>
#include "recursion.h"

using std::cout;
using std::endl;
using std::string;

int main(){
	cout << "Part A:" << endl;
	cout << printRange(1, 10) << endl;
	cout << printRange(-2, 10) << endl;
	cout << printRange(7, 3) << endl;

	cout << endl << "Part B" << endl;
	cout << sumRange(1, 3) << endl;

	cout << endl << "Part C" << endl;
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

	cout << endl << "Part D" << endl;
	cout << isAlphanumeric("ABCDEFGH") << endl;        // true (1)
	cout << isAlphanumeric("Abcdefg123456wxyz") << endl; // true (1)
	cout << isAlphanumeric("KLMNOP 9-8-7") << endl;  // false (0)

	cout << endl << "Part E" << endl;
	cout << nestedParens("((()))") << endl;      // true (1)
	cout << nestedParens("()") << endl;          // true (1)
	cout << nestedParens("") << endl;            // true (1)

	cout << nestedParens("(((") << endl;         // false (0)
	cout << nestedParens("(()") << endl;         // false (0)
	cout << nestedParens(")(") << endl;          // false (0)
	cout << nestedParens("a(b)c") << endl;       // false (0)

	cout << endl << "Part F" << endl;
	int prices [] = {42, 25, 12, 18, 14, 17, 73, 35, 30};
	cout << divisible(prices, 9) << endl;
	
	return 0;
}
