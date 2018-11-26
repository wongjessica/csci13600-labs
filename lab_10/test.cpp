#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "time.h"

Time t = {0, 0};
Time mid = {0, 0};

TEST_CASE("Base Cases"){
	CHECK(minutesSinceMidnight(t) == 0);
	CHECK(minutesUntil(t, mid) == 0);
	CHECK(addMinutes(t, 0).h == 0);
	CHECK(addMinutes(t, 0).m == 0);
	CHECK(compTimes(t, mid) == true);
}

Time t1 = {10, 30};
Time t2 = {12, 30};
Movie m1 = {"Movie1", ACTION, 122};
Movie m2 = {"Movie2", DRAMA, 96};
TimeSlot ts1 = {m1, t1};
TimeSlot ts2 = {m2, t2};
Movie next = {"Movie3", COMEDY, 154};

TEST_CASE("Random Cases"){
	CHECK(minutesSinceMidnight(t1) == 630);
	CHECK(minutesSinceMidnight(t2) == 750);
	CHECK(minutesUntil(t1, t2) == 120);
	CHECK(minutesUntil(t2, t1) == -120);
	CHECK(addMinutes(t1, 30).h == 11);
	CHECK(addMinutes(t1, 30).m == 0);
	CHECK(addMinutes(t2, 30).h == 13);
	CHECK(addMinutes(t2, 30).m == 0);
	CHECK(compTimes(t1, t2) == false);
	CHECK(compTimes(t2, t1) == true);
	CHECK(scheduleAfter(ts1, next).startTime.h == 12);
	CHECK(scheduleAfter(ts1, next).startTime.m == 32);
	CHECK(scheduleAfter(ts2, next).startTime.h == 14);
	CHECK(scheduleAfter(ts2, next).startTime.m == 6);
	CHECK(timeOverlap(ts1, ts2) == true);
}
