#include <iostream>
#include "upper.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string upper(int length) {
	string ans = "";
	for (int i = length; i > 0; i--) {
		ans += line(i, "*");
	}
	return ans;
}
