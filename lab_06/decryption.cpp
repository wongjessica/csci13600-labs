/*
	Author: Jessica Wong
	Course: CSCI-133
	Instructor: Zamansky
	Assignment: Lab6D
  
	This program prints the encrpyted text (both Caesar and Vigenere)
	and the subsequently decrypted text.
*/

#include <iostream>
#include "decryption.h"
#include "helpers.h"

using std::string;

// Decrypts the given text using Caesar encryption
string decryptCaesar(string ciphertext, int rshift){
	string ret = "";
	for (int i = 0; i < ciphertext.length(); i++)
		ret += charBack(ciphertext[i], rshift);
	return ret;
}

// Decrypts the given text using Vigenere encryption
string decryptVigenere(string ciphertext, string keyword){
	if (keyword == "") return ciphertext;
	int ind = 0;
	string ret = "";
	for (int i = 0; i < ciphertext.length(); i++){
		if (isalpha(ciphertext[i])){
			int shift = rShift(keyword[ind % keyword.length()]);
			ret += charBack(ciphertext[i], shift);
			ind++;
		}
		else
			ret += ciphertext[i];
	}
	return ret;
}
