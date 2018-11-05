#include <iostream>
#include "indent.h"

using std::cout;
using std::endl;
using std::string;

int main(){
	string filename = "bad-code.cpp";
	print_unindent(filename);
	cout << endl << "-----------------------------------" << endl << endl;
	filename = "test-prog.cpp";
	print_unindent(filename);
	
	return 0;
}
