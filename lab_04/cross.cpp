#include <iostream>
#include "cross.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string cross(int size) {
	std::string ans = "";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (j == i || j == (size - i - 1)) {
				ans += "*";
			}
			else {
				ans += " ";
			}
		}
		ans += "\n";
	}
	return ans;
}
