#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "east-storage.h"
#include "minmax.h"
#include "reverse-order.h"
#include "compare.h"

TEST_CASE("Valid Date Inputs"){
  CHECK(east_storage("05/20/2016") == 79.88);
  CHECK(compare("09/13/2016","09/17/2016") == 
  "09/13/2016 East\n
  09/14/2016 East\n
  09/15/2016 Equal\n
  09/16/2016 West\n
  09/17/2016 West");
  CHECK(reverse("05/29/2016","06/02/2016") == 
  "06/02/2016  587.66 ft\n
  06/01/2016  587.81 ft\n
  05/31/2016  587.93 ft\n
  05/30/2016  588.02 ft\n
  05/29/2016  588.17 ft");
}

TEST_CASE("Valid"){
	CHECK(min_storage() == 49.34);
	CHECK(max_storage() == 81);
}

TEST_CASE("Invalid"){
  CHECK(compare(23) == "invalid input");
  CHECK(compare("") == "invalid input");
  CHECK(compare("43/34/6353","43/53/7353") == "invalid input. that's not a date");
  CHECK(reverse(23) == "invalid input");
  CHECK(reverse("") == "invalid input");
  CHECK(reverse("43/34/6353","43/53/7353") == "invalid input. that's not a date");}

