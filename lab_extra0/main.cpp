#include <iostream>

using std::cout;
using std::endl;
using std::string;

string encryptCaesar(string plaintext, int rshift){
	string outp = "";
	for (int i = 0; i < plaintext.length(); i++)
		outp += shiftChar(plaintext[i], rshift);
	return outp;
}

int main() {
  string plaintext = "The mitochondria is the powerhouse of the cell.";
  int shift1 = 26;
  cout << "encryptCaesar: " << encryptCaesar(plaintext, shift1) << endl;
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
  
  
}