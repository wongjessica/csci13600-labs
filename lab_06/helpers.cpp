#include <iostream>
#include "helpers.h"

using std::string;

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
	if (65 <= c && c <= 90)
		return (c - 65 + rshift) % 26 + 65;
	if (97 <= c && c <= 122)
		return (c - 97 + rshift) % 26 + 97;
	return c;
}

// A helper function that determines rshift by the given character
int rShift(char c){
	if (65 <= c && c <= 90)
		return c - 65;
	if (97 <= c && c <= 122)
		return c - 97;
	return 0;
}

int addWhile(int c, int i, int min, int max){
	while (min <= c + i && c + i <= max)
		c += i;
	return c;
}

// A helper function to shift one character back by lshift
char charBack(char c, int lshift){
	if (65 <= c && c <= 90)
		return addWhile(c - (lshift % 26), 26, 65, 90);
	if (97 <= c && c <= 122)
		return addWhile(c - (lshift % 26), 26, 97, 122);
	return c;
}
