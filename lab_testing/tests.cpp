#include "catch.hpp"
#include "pig.h"
#define CATCH CONFIG_MAIN

TEST_CASE(“Consonant Cases”) {
CHECK(piglatinify("coffee")=="offeecay");
}

TEST_CASE(“Vowel Cases”) {
CHECK(piglatinify("elephant")=="elephantay");
}

TEST_CASE(“Bad Input”) {
CHECK(piglatinify("")== "Invalid input");
CHECK(piglatinify(2) == "Invalid input");
}