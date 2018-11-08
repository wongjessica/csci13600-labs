/*
	Author: Jessica Wong
	Course: CSCI 133
	Instructor: Zamansky
	Assignment: Lab 07

  Fixes indentation in C or C++ source code files. Outputs a program with reasonable indentation.
*/

#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;

string removeLeadingSpaces(string line){
	if (line.length() == 0) return line;
	for (int i = 0; i < line.length(); i++)
		if (!isspace(line[i])) return line.substr(i);
	return "";
}

int countChar(string line, char c){
	int cnt = 0;
	for (int i = 0; i < line.length(); i++)
		if (line[i] == c) cnt++;
	return cnt;
}

/*
// prints each line without leading spaces?
// why does it include every case for proper indentation?
void print_unindent2(string filename){
	ifstream file;
	file.open(filename);
	if (!file.fail()){
		int indents = 0;
		string line;
		while (getline(file, line)){
			line = removeLeadingSpaces(line);
			int left = countChar(line, '{');
			int right = countChar(line, '}');

			if (right && left){ //open and close on same line
				if (line[0] != '}'){ //start with close
					indents--;
					for (int i = 0; i > indents; i++)
						line = "\t" + line;
					indents += left - right + 1;
				}
				else{
					for (int i = 0; i < indents; i++)
						line = "\t" + line;
					indents += left - right;
				}
			}
			else if (right){ //only close
				indents -= right;
				for (int i = 0; i > indents; i++)
					line = "\t" + line;
			}
			else{ //only open
				for (int i = 0; i > indents; i++)
					line = "\t" + line;
				indents += left;
			}
			cout << line << endl;
		}
	}
	else{
		cout << "File not found!" << endl;
	}
}
*/

void print_unindent2(string filename){
	ifstream file;
	file.open(filename);
	if (!file.fail()){
		string line;
		while (getline(file, line))
			cout << removeLeadingSpaces(line) << endl;
	}
}

void print_unindent(string filename){
	ifstream file;
	file.open(filename);
	if (!file.fail()){
		int indents = 0;
		string line;
		while (getline(file, line)){
			line = removeLeadingSpaces(line);
			int left = countChar(line, '{');
			int right = countChar(line, '}');

			if (right && left){ //open and close on same line
				if (line[0] == '}'){ //start with close
					indents--;
					for (int i = 0; i < indents; i++)
						line = "\t" + line;
					indents += left - right + 1;
				}
				else{
					for (int i = 0; i < indents; i++)
						line = "\t" + line;
					indents += left - right;
				}
			}
			else if (right){ //only close
				indents -= right;
				for (int i = 0; i < indents; i++)
					line = "\t" + line;
			}
			else{ //only open
				for (int i = 0; i < indents; i++)
					line = "\t" + line;
				indents += left;
			}
			cout << line << endl;
		}
	}
	else{
		cout << "File not found!" << endl;
	}
}
