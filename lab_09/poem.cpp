#include <iostream>
#include "func.h"

using namespace std;

string * createAPoemDynamically() {
	string *p = new string;
	*p = "Roses are red, violets are blue";
	return p;
}

int main(){
	cout << "POEM" << endl;
	while(true) {
		string *p;
		p = createAPoemDynamically();
		cout << *p << endl;
		// assume that the poem p is not needed at this point
		delete p;
	}
	cout << endl;

	return 0;
}
