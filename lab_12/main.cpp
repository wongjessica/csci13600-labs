#include "funcs.h"

int main() {
  Network nw;
  cout << "Lab #12\n";

  cout << "Part A\n";
  Profile p1("marco", "Marco");
  cout << p1.getUsername() << endl; // marco
  cout << p1.getFullName() << endl; // Marco (@marco)
  cout << "\n";

  cout << "Part B\n";
  cout << nw.addUser("mario", "Mario") << endl;
  cout << nw.addUser("luigi", "Luigi") << endl;
  cout << nw.addUser("yoshi", "Yoshi") << endl;
  cout << "\n";

  cout << "Part C\n";
  nw.follow("mario", "luigi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");

  nw.printDot();
  
  cout << "\n";
  cout << "Part D\n";
  nw.writePost("mario", "It's a-me, Mario!");
  nw.writePost("luigi", "Hey hey!");
  nw.writePost("mario", "Hi Luigi!");
  nw.writePost("yoshi", "Test 1");
  nw.writePost("yoshi", "Test 2");
  nw.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw.writePost("mario", "My crazy plans always work!");
  nw.writePost("yoshi", "Test 3");
  nw.writePost("yoshi", "Test 4");
  nw.writePost("yoshi", "Test 5");

  cout << endl;
  cout << "======= Mario's timeline =======" << endl;
  nw.printTimeline("mario");
  cout << endl;

  cout << "======= Yoshi's timeline =======" << endl;
  nw.printTimeline("yoshi");
  cout << endl;


}
