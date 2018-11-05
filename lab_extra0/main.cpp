#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <time.h>
#include "words.cpp"

using std::string;
using std::cout;
using std::endl;
using std::ifstream;

string encode(string s, int r){
	char c;
	string result="";
	for (int i = 0; i < s.length(); ++i) {
		c = s[i];
		if (c >= 'a' && c<='z'){
			c  = c - 'a';
			c = (c + r)%26;
			c = c + 'a';
		}
		else if (c >= 'A' && c<='Z'){
			c  = c - 'A';
			c = (c + r)%26;
			c = c + 'A';
		}
		result = result + c;
	}
	return result;
}


double distance(double a[], double b[], int len){
	double sum = 0;
	for (int i = 0; i < len; ++i) {
		sum = sum + (b[i] - a[i]) * (b[i] - a[i]);
	}
	return sqrt(sum);
}

int count_letters(string s, char c){
	int count = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i]==c)
			count++;
	}
	return count;
}

string decode(string s, double freqs[]){
	string test_string;
	int total_letters;
	double test_vector[26];
	double min_dist = 1000;
	double min_index = 0;
	int i;
	double d;

	total_letters = s.length();
	int j = total_letters;
	for (i = 0; i < j; ++i) {
		if (s[i]==' ')
			total_letters--;
	}
	for (i = 0; i < 26; ++i) {
		test_string = encode(s,i);  
		for (j = 0; j < 26; j++) {
			d = 1.0*count_letters(test_string,'a'+j) / total_letters;
			test_vector[j] = d;
		}
		double test_distance = distance(freqs,test_vector,26);
		if (test_distance < min_dist){
			min_dist = test_distance;
			min_index = i;
		}
	}

	string decoded = encode(s,min_index);
	return decoded;
}

// generate array of letter frequencies from book.txt
double freqs[26];

void count_freqs(){
	string line;
	double total_chars = 0.0;
	for (int i = 0; i < 26; i++)
		freqs[i] = 0;
	ifstream file("book.txt");
	while (file >> line)
		for (int i = 0; i < 26; i++){
			int letters = count_letters(line, (65 + i)) + count_letters(line, (97 + i)); // count each letter per line
			freqs[i] += letters;
			total_chars += letters;
		}
	for (int i = 0; i < 26; i++)
		freqs[i] *= 100.0 / total_chars;
}

int main(){
	count_freqs();
	
	string sentence;
	
	cout << "Book Sentence: " << endl << endl;
	srand (time(0));
	int x = 10; 
	for (int i = 0; i < x; i++)
		sentence += words[rand() % 20000] + " ";
	cout << sentence << endl << endl;
	
	cout << "Encrypted sentence: " << endl << endl;
	string cipher = encode(sentence, 5);
	cout << cipher << endl << endl;
	
	cout << "Decrypted sentence: " << endl << endl;
	string decoded = decode(cipher, freqs);
	cout << decoded << endl;
	
	return 0;
}
