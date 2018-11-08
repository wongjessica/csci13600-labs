#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
/*
Author: Jessica Wong
Course: CSCI 135
Instructor: Maryash
Assignment: Project II FINAL PHASE !!!
*/

#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

string uppercaseString(string mixedCase); // input string output uppercase of string
void splitOnSpace (string preSplit, string & before, string & after);

bool isValidInput(string inputString);
void getPronunciation(string dictGet, string & dictEntry,
                      string & pronunciation); // couts pronunciation given a word
string getHomophones(string pronunciation, string dictEntry); // gets words with the same pronunciation
void getAddPhoneme(string pronunciation, string dictEntry); // gets words with the same pronunciation off by a phoneme
void getRemovePhonemes(string pronunciation, string dictEntry); // gets words with the same pronunciation missing a phoneme
void getReplacePhonemes(string pronunciation, string dictEntry); // gets words with the same pronunciation missing a phoneme
int countChar(string line, char c); // counts instances of char in string
string removeLeadingSpaces(string line);


int main() {
  string usrIn; // get user input
  cin >> usrIn;

  if (! isValidInput(usrIn)) {
    cout << "Not found " << endl; // invalid input
    return 0;
  }
  string dictLine, dictEntry, pronunciation;
  string dictGet = uppercaseString(usrIn);
  getPronunciation(dictGet, dictEntry, pronunciation);

  string identicalPronunciations = getHomophones(pronunciation, dictEntry);
  cout << "Identical \t\t: " << identicalPronunciations << endl;
  getAddPhoneme(pronunciation, dictEntry);
  getRemovePhonemes(pronunciation, dictEntry);
  getReplacePhonemes(pronunciation, dictEntry);
}

void getReplacePhonemes(string pronunciation, string dictEntry) {
  ifstream fin("cmudict.0.7a");
  string leading, trailing;

  int phonemeCount = (countChar(pronunciation, ' ') +1);
  string *array = new string[phonemeCount];
  int i = 0;
  stringstream ssin(pronunciation); // pushes phonemes into array
  while (ssin.good() && i < phonemeCount) {
    ssin >> array[i];
    ++i;
  }

  string pronunciationTest, dictLine;
  string identicalPhonemeString = "";

  while (getline(fin, dictLine)) {
    splitOnSpace(dictLine, dictEntry, pronunciationTest);

    if(!isalpha(dictLine[0]) && dictLine[0] != '\'') { // skip iteration if the line is a comment or the word starts invalidly
      continue;
    }

    if (!isValidInput(dictEntry)) {
      continue;
    }

    int phonemeTestCount = (countChar(pronunciationTest, ' ') +1);
    string *testArray = new string[phonemeTestCount];

    int i = 0;
    stringstream ssin(pronunciationTest); // pushes phonemes into array
    while (ssin.good() && i < phonemeTestCount) {
      ssin >> testArray[i];
      ++i;
    }
    if (! (phonemeCount == phonemeTestCount )) {
      continue;
    }

    int counter = 0;
    for (int i = 0; i < phonemeCount; i++) {
      if (testArray[i] == array[i]) {
        counter++;
      }
    }

    if (counter == phonemeCount - 1) {
      identicalPhonemeString += dictEntry + " ";
    }
  }
  cout << "Replace phoneme \t\t: " << identicalPhonemeString << endl;

  fin.close();
}


void getRemovePhonemes(string pronunciation, string dictEntry) {
  ifstream fin("cmudict.0.7a");
  string leading, trailing;

  int phonemeCount = (countChar(pronunciation, ' ') +1);
  string *array = new string[phonemeCount];
  int i = 0;
  stringstream ssin(pronunciation); // pushes phonemes into array
  while (ssin.good() && i < phonemeCount) {
    ssin >> array[i];
    ++i;
  }

  string pronunciationTest, dictLine;
  string identicalPhonemeString = "";

  while (getline(fin, dictLine)) {
    splitOnSpace(dictLine, dictEntry, pronunciationTest);

    if(!isalpha(dictLine[0]) && dictLine[0] != '\'') { // skip iteration if the line is a comment or the word starts invalidly
      continue;
    }

    if (!isValidInput(dictEntry)) {
      continue;
    }

    int phonemeTestCount = (countChar(pronunciationTest, ' ') +1);
    string *testArray = new string[phonemeTestCount];
    //string *interimArray = new string[phonemeCount];
    int i = 0;
    stringstream ssin(pronunciationTest); // pushes phonemes into array
    while (ssin.good() && i < phonemeTestCount) {
      ssin >> testArray[i];
      ++i;
    }
    if (! (phonemeCount  - 1 == phonemeTestCount )) {
      continue; // cout << "size of the arrays are the same" << endl;
    }

    string interim;
    for (int i = 0; i < phonemeCount; i++) {
      interim = "";
      for (int j = 0; j < i; j++) { // fill before i
        if(i == phonemeCount-1 && j == i - 1) {
          interim += array[j];
        } else {
          interim += array[j] + " ";
        }
      }

      for(int j = i+1; j < phonemeCount; j++) { // fill after i not including it
        if(j == phonemeCount - 1) {
          interim += array[j];
        } else {
          interim += array[j] + " ";
        }
      }

      // cout << pronunciationTest << " - " << interim << " - " <<  pronunciation << ";\n";
      if (interim == pronunciationTest) {
        identicalPhonemeString += dictEntry + " ";
        break;
      }

      // identicalPhonemeString  = getHomophones(interim, dictEntry);
      // break;
    }
  }
  cout << "Remove phoneme \t\t: " << identicalPhonemeString << endl;

  fin.close();
}

void getAddPhoneme(string pronunciation, string dictEntry) {
  ifstream fin("cmudict.0.7a");
  string leading, trailing;

  int phonemeCount = (countChar(pronunciation, ' ') +1);
  string *array = new string[phonemeCount];
  int i = 0;
  stringstream ssin(pronunciation); // pushes phonemes into array
  while (ssin.good() && i < phonemeCount) {
    ssin >> array[i];
    ++i;
  }

  string pronunciationTest, dictLine;
  string identicalPhonemeString = "";

  while (getline(fin, dictLine)) {
    splitOnSpace(dictLine, dictEntry, pronunciationTest);

    // skip iteration if the line is a comment or the word starts invalidly
    if(!isalpha(dictLine[0]) && dictLine[0] != '\'') {
      continue;
    }

    if (!isValidInput(dictEntry)) {
      continue;
    }

    int phonemeTestCount = (countChar(pronunciationTest, ' ') +1);
    string *testArray = new string[phonemeTestCount];

    int i = 0;
    stringstream ssin(pronunciationTest); // pushes phonemes into array
    while (ssin.good() && i < phonemeTestCount) {
      ssin >> testArray[i];
      ++i;
    }
    if (! (phonemeCount + 1 == phonemeTestCount)) {// size of the arrays are the same
      continue;
    }


    string interim;
    for (int i = 0; i < phonemeTestCount; i++) {
      interim = "";
      for (int j = 0; j < i; j++) { // fill before i
        if(i == phonemeTestCount-1 && j == i - 1) {
          interim += testArray[j];
        } else {
          interim += testArray[j] + " ";
        }
      }

      for(int j = i+1; j < phonemeTestCount; j++) { // fill after i not including it
        if(j == phonemeTestCount - 1) {
          interim += testArray[j];
        }
        else {
          interim += testArray[j] + " ";
        }
      }

      //cout << pronunciationTest << "-" << interim << "-" <<  pronunciation << ";\n";
      if (interim == pronunciation) {
        identicalPhonemeString += dictEntry + " ";
        break;
      }
    }
  }

  cout << "Add phoneme \t\t: " << identicalPhonemeString << endl;
  fin.close();
}




string getHomophones(string pronunciation, string dictEntry) { // gets words with the same pronunciation
  ifstream fin("cmudict.0.7a");
  string testDictEntry, testPronunciation, dictLine, identicalPronunciations;
  while (getline(fin, dictLine)) {
    splitOnSpace(dictLine, testDictEntry, testPronunciation);
    if (pronunciation == testPronunciation && dictEntry != testDictEntry) {
      identicalPronunciations += testDictEntry + " ";
    }
  }
  return identicalPronunciations;
  fin.close();
}

bool isValidInput(string inputString) { // takes string input, returns true if program can deal with it
  if (inputString.length() == 0) { // specify conditions you don't want
    return false; // return false for those conditions
  }

  char c;
  for (int i = 0; i < inputString.length(); i++) {
    c = inputString[i];
    if ( !isalpha(c) && !(c == 39)) {
      return false;
    }
  }
  return true;
}

void getPronunciation(string dictGet, string & dictEntry,
                      string & pronunciation) { // couts pronunciation given a word
  // also returns pronunciation
  ifstream fin("cmudict.0.7a");
  dictEntry = "";
  pronunciation = "";
  string dictLine;
  if (fin.fail()) {
    cerr << "Not found" << endl;
    exit(1); // exit if failed to open the file
  }
  bool isPresent = false;
  while (getline(fin, dictLine)) {
    splitOnSpace(dictLine, dictEntry, pronunciation);
    if (dictGet == dictEntry) {
      cout << "Pronunciation \t\t: " << pronunciation << endl;
      isPresent = true;
      break;
    }
  }
  if (!isPresent) {
    cout << "Not found" << endl;
  }
  fin.close();
}

void splitOnSpace (string preSplit, string & before, string & after) {
  // reset strings
  before = "";
  after = "";// accumulate before space
  int i = 0;
  while (i < preSplit.size() && not isspace(preSplit[i])) {
    before += preSplit[i];
    i++; // skip the space
  }
  i++;
  while (i < preSplit.size()) { // accumulate after space
    after += preSplit[i];
    i++;
  }
  after = removeLeadingSpaces(after);
}

string uppercaseString(string mixedCase) {
  char c; // initialize variables
  string upperCase;
  for (int i = 0; i < mixedCase.length(); i++) { // iterate through string
    c = mixedCase[i];
    if (c >= 'a' && c <= 'z') {
      upperCase += (char)(c + ('A'-'a')); // uppercase lowercase chars
    } else {
      upperCase += c;
    }
  }
  return upperCase;
}

void testString(string testString) {
  cout << uppercaseString(testString);
  cout << endl << endl;
  for (int i = 0; i < testString.length(); i++) {
    cout << testString[i] << "\t" << boolalpha
         << (bool)isalpha(testString[i]) << endl;
  }
}

int countChar(string line, char c) {
  unsigned int counter = 0;
  for (unsigned int i = 0; i < line.length(); i++) {
    if (c == line[i]) {
      counter++;
    }
  }
  return counter;
}

string removeLeadingSpaces(string line) {
  bool counter = 0;
  string outString;
  for (unsigned int i = 0; i < line.length(); i++) {
    if (!counter and !isspace(line[i])) {
      counter = 1;
    }
    if (counter) {
      outString += line[i];
    }
  }
  return outString;
}
