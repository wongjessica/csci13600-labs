/*
	Author: Jessica Wong
	Course: CSCI-133
	Instructor: Zamansky
	Assignment: Lab6A
  
  Asks the user to input a line of text (which may possibly include spaces). 
  The program should report all characters from the input line together with their ASCII codes.
*/

#include <iostream>
#include <string>
#include "test-ascii.h"

using std::string;

string test_ascii(string s){
	string ret = "";
	for (int i = 0; i < s.length(); i++){
		ret += s[i];
		ret += " ";
		int c = s[i];
		ret += std::to_string(c);
		ret += "\n";
	}
	return ret;
}
