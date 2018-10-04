#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "upper.h"
#include "lower.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

TEST_CASE("Base Cases"){
	CHECK(box(0,0) == "");
	CHECK(checkerboard(0,0) == "");
	CHECK(cross(0) == "");
	CHECK(lower(0) == "");
	CHECK(upper(0) == "");
	CHECK(trapezoid(0,0) == "");
	CHECK(checkerboard3x3(0,0) == "");
}

TEST_CASE("Random Cases"){
	CHECK(box(4,6) == "****\n****\n****\n****\n****\n****\n");
	CHECK(checkerboard(5,5) == "* * *\n * * \n* * *\n * * \n* * *\n");
	CHECK(cross(7) == "*     *\n *   *\n  * *\n   *\n  * *\n *   *\n*     *\n");
	CHECK(cross(6) == "*    *\n *  *\n  **\n  **\n *  *\n*    *\n");
	CHECK(lower(5) == "*\n**\n***\n****\n*****\n");
	CHECK(upper(5) == "*****\n ****\n  ***\n   **\n    *\n");
	CHECK(trapezoid(8,3) == "********\n ******\n  ****\n");
	CHECK(trapezoid(3,8) == "Impossible shape!\n");
	CHECK(checkerboard3x3(9,9) == "***   ***\n***   ***\n***   ***\n   ***   \n   ***   \n   ***   \n***   ***\n***   ***\n***   ***\n");
}
