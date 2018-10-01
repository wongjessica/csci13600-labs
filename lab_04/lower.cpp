/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Zamansky / Maryash
Assignment: Lab 4D
*/ 

#include <iostream>

string lower(int length) {
  string str = "";
  for(int i=0;    i<=length;   i++){
    for(int j=0;    j<i;    j++){
      str += "*";
    }
    str += "\n";
  }
}
