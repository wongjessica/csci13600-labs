#include <iostream>
#include "test-ascii.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

using std::cout;
using std::endl;
using std::string;

int main(){	
	string plaintext = "Hello, World!", keyword = "cake";
	string cipher1 = "Rovvy, Gybvn!", cipher2 = "Jevpq, Wyvnd!", keywordD = "cake";
	int shift1 = 9, shift2 = 8;
	
	cout << "plaintext: " << plaintext << endl;
	cout << "shift1: " << shift1 << endl;
	cout << "keyword1: " << keyword << endl;
	cout << "cipher1: " << cipher1 << endl;
	cout << "cipher2: " << cipher2 << endl;
	cout << "keyword2: " << keywordD << endl;
	cout << "shift2: " << shift2 << endl << endl;
	
	cout << "test_ascii: \n" << test_ascii(plaintext) << endl;
	
	cout << "encryptCaesar: " << encryptCaesar(plaintext, shift1) << endl;
	
	cout << "encryptVigenere: " << encryptVigenere(plaintext, keyword) << endl;
	
	cout << "decryptCaesar: " << decryptCaesar(cipher1, shift2) << endl;
	
	cout << "decryptVigenere: " << decryptVigenere(cipher2, keywordD) << endl;
	
	return 0;
}
