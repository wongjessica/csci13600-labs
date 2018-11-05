#include <iostream>
#include "indent.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){

	cout << "Part A:" << endl << endl;
	string filename = "bad-code.cpp";
	print_unindent2(filename);
	cout << endl << "Part B:" << endl;
	filename = "testprog.cpp";
	print_unindent(filename);
	
	return 0;
}	
