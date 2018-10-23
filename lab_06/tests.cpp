#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "helpers.h"
#include "test-ascii.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

TEST_CASE("Base Cases"){
	CHECK(encryptCaesar("", 0) == "");
	CHECK(encryptCaesar("Hello, World!", 0) == "Hello, World!");
	CHECK(encryptVigenere("", "a") == "");
	CHECK(encryptVigenere("Hello, World!", "a") == "Hello, World!");
	CHECK(decryptCaesar("", 0) == "");
	CHECK(decryptCaesar("Hello, World!", 0) == "Hello, World!");
	CHECK(decryptVigenere("", "a") == "");
	CHECK(decryptVigenere("Hello, World!", "") == "Hello, World!");
}
TEST_CASE("Random Tests"){
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
	CHECK(decryptCaesar("Yvccf, Nficu!", 17) == "Hello, World!");
	CHECK(decryptCaesar("ithi", 15) == "test");
	CHECK(decryptVigenere("Aiwpj, Egzzq!", "television") == "Hello, World!");
	CHECK(decryptVigenere("kikm","rest") == "test");
}
