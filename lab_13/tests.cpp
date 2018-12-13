#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "victor.hpp"

Victor<int> base1;
Victor<std::string> base2;

TEST_CASE("Base Cases"){
	CHECK(base1.size() == 0);
	CHECK(base2.size() == 0);
}

Victor<int> v1(3, 100);
TEST_CASE("ints"){
	v1.push_back(2);
	CHECK(v1[3] == 2);
	CHECK(v1[2] == v1[1]);
	CHECK(v1[1] == v1[0]);
	CHECK(v1[0] == 100);
	CHECK(v1.at(3) == 2);
	CHECK(v1.at(2) == v1.at(1));
	CHECK(v1.at(1) == v1.at(0));
	CHECK(v1.at(0) == 100);
	v1.insert(2, 4);
	CHECK(v1[2] == 4);
	CHECK(v1.at(2) == 4);
	v1.erase(1);
	CHECK(v1[1] == 4);
	CHECK(v1.at(1) == 4);
	v1.resize(10);
	CHECK(v1[8] == 0);
	CHECK(v1.at(9) == 0);
	v1.resize(11, 2);
	CHECK(v1[10] == 2);
	CHECK(v1.at(10) == 2);
}

Victor<std::string> v2(3, "100");
TEST_CASE("strings"){
	v2.push_back("2");
	CHECK(v2[3] == "2");
	CHECK(v2[0] == "100");
	CHECK(v2.at(1) == v2.at(0));
	CHECK(v2.at(0) == "100");
	v2.insert(2, "4");
	CHECK(v2[2] == "4");
	CHECK(v2.at(2) == "4");
	v2.erase(1);
	CHECK(v2[1] == "4");
	CHECK(v2.at(1) == "4");
	v2.resize(10);
	CHECK(v2[8] == "");
	CHECK(v2.at(9) == "");
	v2.resize(11, "2");
	CHECK(v2[10] == "2");
	CHECK(v2.at(10) == "2");
}
