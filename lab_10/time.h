#pragma once

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time { 
	public:
	int h;
	int m;
};

class Movie { 
	public: 
	std::string title;
	Genre genre;     // only one genre per movie
	int duration;    // in minutes
};

class TimeSlot { 
	public: 
	Movie movie;     // what movie
	Time startTime;  // when it starts
};

// returns how many minutes have passed since midnight to the given time
int minutesSinceMidnight(Time time){
	return (60 * time.h) + time.m;
}

// returns how many minutes are between earlier and later
int minutesUntil(Time earlier, Time later){
	int hr = later.h - earlier.h;
	int min = later.m - earlier.m;
	if (min < 0){
		hr--;
		min = 60 + min;
	}
	return (hr * 60) + min;
}

// adds given minutes to given time and returns the result
Time addMinutes(Time time0, int min){
	time0.m += min;
	time0.h = (time0.h + (time0.m / 60)) % 24;
	time0.m %= 60;

	return time0;
}

// prints given time
void printTime(Time time) {
	if (time.m < 10)
		std::cout << time.h << ":0" << time.m;
	else
		std::cout << time.h << ":" << time.m;
}

// prints given movie
void printMovie(Movie mv){
	std::string g;
	switch (mv.genre) {
		case ACTION   : g = "ACTION"; break;
		case COMEDY   : g = "COMEDY"; break;
		case DRAMA    : g = "DRAMA";  break;
		case ROMANCE  : g = "ROMANCE"; break;
		case THRILLER : g = "THRILLER"; break;
	}
	std::cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

// prints given timeslot
void printTimeSlot(TimeSlot ts){
	printMovie(ts.movie);
	std::cout << " [starts at ";
	printTime(ts.startTime);
	std::cout << ", ends by ";
	printTime(addMinutes(ts.startTime, ts.movie.duration));
	std::cout << "]";
}

// returns a timeslot that starts right after the given timeslot
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
	TimeSlot ret;
	Time endTime = addMinutes(ts.startTime, ts.movie.duration);
	ret.startTime = endTime;
	ret.movie = nextMovie;
	return ret;
}

// returns whether t1 is later than t2
bool compTimes(Time t1, Time t2){
	return minutesUntil(t2, t1) >= 0;
}

// returns whether to two timeslots overlap
bool timeOverlap(TimeSlot t1, TimeSlot t2){
	Time t1s = t1.startTime;
	Time t2s = t2.startTime;
	Time t1e = addMinutes(t1s, t1.movie.duration);
	Time t2e = addMinutes(t2s, t2.movie.duration);
	bool a = compTimes(t1e, t2s) && compTimes(t2s, t1s);
	bool b = compTimes(t2e, t1s) && compTimes(t1s, t2s);
	return a || b;
}
