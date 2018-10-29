#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <math.h>

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
  int shift1 = 18;
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
  
  int min_chi = 2147483647;
  string shifted_encrypt = "";
  int decrypt_shift = 0;
  for (int j = 1; j < a.size(); j++) {
    int len = 0;
    vector<float> b;
	shifted_encrypt = encryptCaesar(encrypt, j);
	int occurrence[26] = {};
	for (int i = 0; i < shifted_encrypt.length(); i++) {
		char c = shifted_encrypt.at(i);
		if ((97 <= c && c <= 122)) {
			len++; 
    		for (int f = 0; f < a.size(); f++) {
    			if(97+f==c) {
    				occurrence[f] += 1;
    			}
    		}
		}
	  }
	for (int h=0; h < a.size(); h++) {
	  	b.push_back((float)occurrence[h]/len);
	}
	float chi = 0;
	for (int o = 0; o < a.size(); o++) {
	    chi += pow(b.at(o)*encrypt.length() - a.at(o)*encrypt.length(),2)/a.at(o)*encrypt.length();
	}
	if (chi < min_chi) {
	    min_chi = chi;
	    decrypt_shift = j;
	}
}
cout << "Decrypt shift:: " << 26-decrypt_shift << endl;

return 0;
}
