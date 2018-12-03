#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::to_string;

bool isAlphanumeric(string s);

struct Post{
  string username;
  string message;
};

class Profile {
private:
    string username;
    string displayname;
public:
    Profile(string usrn, string dspn);
    Profile();
    string getUsername();
    string getFullName();
    void setDisplayName(string dspn);
};

class Network {
private:
  static const int MAX_USERS = 20;
  static const int MAX_POSTS = 100;
  int numUsers;
  int numPosts;
  Profile profiles[MAX_USERS];
  bool following[MAX_USERS][MAX_USERS];
  Post posts[MAX_POSTS];
  int findID (string usrn);
public:
  Network();
  bool addUser(string usrn, string dspn);
  bool follow(string usrn1, string usrn2);
  void printDot();
  bool writePost(string usrn, string msg);
  bool printTimeline(string usrn);
};
