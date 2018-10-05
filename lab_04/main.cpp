#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "upper.h"
#include "lower.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"
#include "redo.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int box1, int box2;
	cout << "\nEnter width(for box.cpp): ";
	cin >> box1;
	cout << "Enter height(for box.cpp): ";
	cin >> box2;
	cout << "\nShape: " << endl << box(box1, box2);
	
	int cb1, cb2;
	cout << "\nEnter width(for checkerboard.cpp): ";
	cin >> cb1;
	cout << "Enter height(for checkerboard.cpp): ";
	cin >> cb2;
	cout << "\nShape: " << endl << checkerboard(cb1, cb2);
	
	int cro;
	cout << "\nEnter length(for cross.cpp): ";
	cin >> cro;
	cout << "\nShape: " << endl << cross(cro);
	
	int lowe;
	cout << "\nEnter height(for lower.cpp): ";
	cin >> lowe;
	cout << "\nShape: " << endl << lower(lowe);
	
	int upp;
	cout << "\nEnter height: ";
	cin >> upp;
	cout << "\nShape: " << endl << upper(upp);
	
	int trapw, traph;
	cout << "\nEnter width: ";
	cin >> trapw;
	cout << "Enter height: ";
	cin >> traph;
	cout << "\nShape: " << endl << trapezoid(trapw, traph);
	
	int cb3x3w, cb3x3h;
	cout << "\nEnter width: ";
	cin >> cb3x3w;
	cout << "Enter height: ";
	cin >> cb3x3h;
	cout << "\nShape: " << endl << checkerboard3x3(cb3x3w, cb3x3h);
	
	
	
	return 0;
}
