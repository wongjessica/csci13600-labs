#include <iostream>
#include "trapezoid.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

string trapezoid(int width, int height){
	string ans = "";
	if (w/2 < h) {
		ans = "Impossible shape\n";
	}
	else {
		for (int i = 0; i < h; i++) {
			int stars = w - (2 * i);
			ans += line(i, " ").substr(0, i);
			ans += line(stars, "*").substr(0, stars);
			ans += line(i, " ");
		}
	}
	return ans;
}
