#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.h"


TEST_CASE("Constant Cases"){
  CHECK(piglatinify("coffee")=="offeecay");
}

TEST_CASE("Vowel Cases"){
  CHECK(piglatinify("elephant")== "elephantay");
}
TEST_CASE("Bad Cases"){
  CHECK(piglatinify("")== "invalid input");
}


