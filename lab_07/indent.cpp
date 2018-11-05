/*
	Author: Jessica Wong
	Course: CSCI 133
	Instructor: Zamansky
	Assignment: Lab7

  Fixes indentation in C or C++ source code files. Outputs a program with reasonable indentation.
*/

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int countChar(string line, char c) {
	int count = 0;
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == c) {
			count++;
		}
	}
	return count;
}

string removeLeadingSpaces(string line) {
	int index = 0;
	while (isspace(line[index])) {
		index++;
		continue;
	}
	return line.substr(index);
}

int main() {
	string line = "";
	int numOpenBraces = 0;
	int numClosedBraces = 0;
	int numBlocks = 0;
	while (getline(cin, line)) {
		line = removeLeadingSpaces(line);
		numOpenBraces += countChar(line, '{');
		numClosedBraces += countChar(line, '}');
		string multTabs = "";
		if (line.at(0) == '}') {
			numBlocks--;
		}
		for (int i = 0; i < numBlocks; i++) {
			multTabs += "\t";
		}
		numBlocks = numOpenBraces - numClosedBraces;
		cout << multTabs <<removeLeadingSpaces(line) << "\n";
		line = "";
	}
	return 0;
}
