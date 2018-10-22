/*
	Author: Jessica Wong
	Course: CSCI-133
	Instructor: Zamansky
	Assignment: Lab6C
  
	The user enters the plaintext and the keyword, and the program reports the ciphertext
*/

#include <iostream>
#include "vigenere.h"
#include "helpers.h"

using std::string;

 // Vigenere cipher encryption
string encryptVigenere(string plaintext, string keyword){
	if (keyword == "") return plaintext;
	string ret = "";
	int l = keyword.length();
	int ind = 0;
	for (int i = 0; i < plaintext.length(); i++){
		if (isalpha(plaintext[i])){
			int shift = rShift(keyword[ind % l]);
			ret += shiftChar(plaintext[i], shift);
			ind++;
		}
		else
			ret += plaintext[i];
	}
	return ret;
}
