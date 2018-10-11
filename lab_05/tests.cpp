#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "numbers.h"

TEST_CASE("Base Cases"){
	
}

TEST_CASE("Random Cases"){
	CHECK(isDivisibleBy(16,8) == true);
	CHECK(isDivisibleBy(16,9) == false);
	CHECK(isPrime(7) == true);
	CHECK(isPrime(9) == false);
	CHECK(nextPrime(15) == 17);
	CHECK(nextPrime(17) == 19);
	CHECK(countPrimes(10,17) == 3);
	CHECK(isTwinPrime(17) == true);
	CHECK(isTwinPrime(23) == false);
	CHECK(isTwinPrime(21) == false);
	CHECK(nextTwinPrime(21) == 29);
	CHECK(largestTwinPrime(1,31) == 31);
	CHECK(largestTwinPrime(1,30) == 29);
}
