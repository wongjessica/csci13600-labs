#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "east-storage.h"
#include ""
#include "reverse-order.h"
#include "compare.h"

TEST_CASE("Dates"){
  CHECK(east_storage("05/20/2016") == 79.88);
}

TEST_CASE("Invalid"){
  CHECK(east-storage("") == -1);
  CHECK(east-storage(5) == -1);
}

