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
	string cipher1 = "Olssv, Dvysk!", cipher2 = "Yeyoc, Ifryg!", keywordD = "random";
	int shift1 = 7, shift2 = 6;
	
	cout << "plaintext: " << plaintext << endl;
	cout << "shift1: " << shift1 << endl;
	cout << "keyword: " << keyword << endl;
	cout << "cipher1: " << cipher1 << endl;
	cout << "cipher2: " << cipher2 << endl;
	cout << "keywordD: " << keywordD << endl;
	cout << "shift2: " << shift2 << endl << endl;
	
	cout << "test_ascii(plaintext): \n" << test_ascii(plaintext) << endl;
	
	cout << "encryptCaesar(plaintext, shift1): " << encryptCaesar(plaintext, shift1) << endl;
	
	cout << "encryptVigenere(plaintext, keyword): " << encryptVigenere(plaintext, keyword) << endl;
	
	cout << "decryptCaesar(cipher1, shift2): " << decryptCaesar(cipher1, shift2) << endl;
	
	cout << "decryptVigenere(cipher2, keywordD): " << decryptVigenere(cipher2, keywordD) << endl;
	
	return 0;
}
