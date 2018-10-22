/*
	Author: Jessica Wong
	Course: CSCI-133
	Instructor: Zamansky
	Assignment: Lab6B
  
	Asks the user to input a plaintext sentence, then enter the right shift, 
  and report the ciphertext computed using your encryption function
*/

#include <iostream>
#include "caesar.h"
#include "helpers.h"

using std::string;

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift){
	string ret = "";
	for (int i = 0; i < plaintext.length(); i++)
		ret += shiftChar(plaintext[i], rshift);
	return ret;
}
