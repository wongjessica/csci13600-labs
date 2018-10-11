#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "numbers.h"

TEST_CASE("Base Cases"){
	
}

TEST_CASE("Arbitrary Cases"){
	
	CHECK(isDivisibleBy(100,25) == true);
	CHECK(isDivisibleBy(35,17) == false);
	
	CHECK(isPrime(47) == true);
	CHECK(isPrime(24) == false);
	
	CHECK(nextPrime(14) == 17);
	CHECK(nextPrime(17) == 19);
	
	CHECK(countPrimes(10,17) == 3);
	
	CHECK(isTwinPrime(3) == true);
	CHECK(isTwinPrime(5) == true);
	CHECK(isTwinPrime(7) == true);
	CHECK(isTwinPrime(11) == true);
	CHECK(isTwinPrime(4) == false);
	CHECK(isTwinPrime(6) == false);
	CHECK(isTwinPrime(8) == false);
	CHECK(isTwinPrime(9) == false);
	
	CHECK(nextTwinPrime(21) == 29);
	
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(5, 18) == 17);
	CHECK(largestTwinPrime(14, 16) == -1);

}
