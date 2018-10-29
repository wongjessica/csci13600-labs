#include <string>
#include <sstream>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

char shiftChar(char c, int rshift){
	if (65 <= c && c <= 90)
		return (c - 65 + rshift) % 26 + 65;
	if (97 <= c && c <= 122)
		return (c - 97 + rshift) % 26 + 97;
	return c;
}

string encryptCaesar(string plaintext, int rshift){
	string outp = "";
	for (int i = 0; i < plaintext.length(); i++) {
		outp += shiftChar(plaintext[i], rshift);
	}
	return outp;
}

int main() {
  string plaintext = "The mitochondria is the powerhouse of the cell.";
  int shift1 = 13;
  string encrypt = encryptCaesar(plaintext, shift1);
  cout << "Encrypted Message:: " << encrypt << endl;
  
  vector<float> a;
  a.push_back(.08167);
  a.push_back(.01492);
  a.push_back(.02782);
  a.push_back(.04253);
  a.push_back(.12702);
  a.push_back(.02228);
  a.push_back(.02015);
  a.push_back(.06094);
  a.push_back(.06966);
  a.push_back(.00153);
  a.push_back(.00772);
  a.push_back(.04025);
  a.push_back(.02406);
  a.push_back(.06749);
  a.push_back(.07507);
  a.push_back(.01929);
  a.push_back(.00095);
  a.push_back(.05987);
  a.push_back(.06327);
  a.push_back(.09056);
  a.push_back(.02758);
  a.push_back(.00978);
  a.push_back(.02360);
  a.push_back(.00150);
  a.push_back(.01974);
  a.push_back(.00074);
  
  int len = 0;
  string shifted_encrypt = "";
  for (int j = 1; j < a.size(); j++) {
	shifted_encrypt = encryptCaesar(encrypt, j);
	for (int i = 0; i < shifted_encrypt.length(); i++) {
		char c = shifted_encrypt.at(int i);
		if ((97 <= c && c <= 122)) {
			len++;
		}
		for (int f = 0; f < shifted_encrypt; f++) {
			if ((97 <= c && c <= 122)) {
				
			}
		}
	}	  
  }	  
 	
}
