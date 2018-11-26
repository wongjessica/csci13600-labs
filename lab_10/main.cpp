#include <iostream>
#include "time.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	Time earlier = {10, 30}, later = {12, 30};
	cout << "First time: ";
	printTime(earlier);
	cout << endl << "Second time: ";
	printTime(later);

	//Task A
  cout << "Task A\n" << endl;
	cout << endl << "These moments of time are " << minutesSinceMidnight(earlier) << " and " << minutesSinceMidnight(later) << " since midnight." << endl;
	cout << endl << "The interval between them is " << minutesUntil(earlier, later) << " minutes." << endl;

	//Task B
  cout << "Task B\n" << endl;
	int min = 30;
	cout << endl << "Minutes to add: " << min;
	Time e = addMinutes(earlier, min);
	Time l = addMinutes(later, min);
	cout << endl << "The new times are ";
	printTime(e);
	cout << " and ";
	printTime(l);
	cout << endl;

	//Task C
  cout << "Task C\n" << endl;
	cout << endl << "Movies: " << endl;
	Movie movie1 = {"Venom", ACTION, 112};
	Movie movie2 = {"Halloween", THRILLER, 91};
	Movie movie3 = {"A Star is Born", DRAMA, 136};
	Movie movie4 = {"Hocus Pocus", COMEDY, 96};
	Movie movie5 = {"Hunter Killer", ACTION, 122};
	TimeSlot movies[5] = {{movie1, {10, 0}}, {movie2, {19, 0}}, \
	{movie3, {12, 45}}, {movie4, {14, 0}}, {movie5, {16, 15}}};
	for (int i = 0; i < 5; i++){
		printMovie(movies[i].movie);
		Time s = movies[i].startTime;
		int d = movies[i].movie.duration;
		Time e = addMinutes(s, d);
		cout << " [starts at ";
		printTime(s);
		cout << ", ends by ";
		printTime(e);
		cout << "]" << endl;
	}

	//Task D
  cout << "Task D\n" << endl;
  int choice;
	Movie movie6 = {"Avengers: Infinity War", ACTION, 160};
	TimeSlot ts;
	ts.movie = movie6;
	cout << endl << "Next movie for movies 1-5: ";
	printMovie(movie6);

	for (int i = 0; i < 5; i++){
		cout << endl << "Movie " << (i + 1) << ":" << endl;
		ts = scheduleAfter(movies[i], movie6);
		printTimeSlot(ts);
	}

	cout << endl;

	//Task E
  cout << "Task E\n" << endl;
	Movie movie7 = {"Deadpool 2", ACTION, 120};
	ts.movie = movie7;
	Time t = {20, 00};
	ts.startTime = t;
	cout << endl << "Movie 7: ";
	printTimeSlot(ts);
	cout << endl;
	for (int i = 0; i < 5; i++){
		if (timeOverlap(ts, movies[i])){
			cout << "Movie 7 overlaps with ";
			printMovie(movies[i].movie);
			cout << endl;
		}
		else{
			cout << "Movie 7 does not overlap with ";
			printMovie(movies[i].movie);
			cout << endl;
		}
	}


	return 0;
}
