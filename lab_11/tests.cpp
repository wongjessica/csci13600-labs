#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "recursion.h"

int base[] = {};

TEST_CASE("Base Cases"){
	CHECK(printRange(0, 0) == "0");
	CHECK(sumRange(0, 0) == 0);
	CHECK(sumArray(base, 0) == 0);
	CHECK(isAlphanumeric(""));
	CHECK(nestedParens(""));
	CHECK(solvable(base, 0, 0, 0));
}

int arr[] = {4, 3, 6, 8, 7};
TEST_CASE("Random Cases"){
	CHECK(printRange(1, 10) == "1 2 3 4 5 6 7 8 9 10");
	CHECK(sumRange(1, 10) == 55);
	CHECK(sumArray(arr, 5) == 28);
	CHECK(isAlphanumeric("thisisastring2"));
	CHECK(!isAlphanumeric("this is also a string }"));
	CHECK(nestedParens("((((()))))"));
	CHECK(!nestedParens("(((((a)))))"));
	CHECK(!nestedParens("((((())))"));
	CHECK(solvable(arr, 5, 0, 0));
}
