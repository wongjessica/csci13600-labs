#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "east-storage.h"
#include "minmax.h"
#include "reverse-order.h"
#include "compare.h"

TEST_CASE("Dates"){
  CHECK(east_storage("05/20/2016") == 79.88);
}

TEST_CASE("Invalid"){
  CHECK(east-storage("") == -1);
  CHECK(east-storage(5) == -1);
  CHECK(min_storage() != 61.13);
  CHECK(man_storage() != 69.22);
}

