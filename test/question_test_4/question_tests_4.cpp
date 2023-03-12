#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Test for sequence")
{
	REQUIRE(get_fib_number(5) == "0 1 1 2 3 5"); // Code matches the test case 
	REQUIRE(get_fib_number(7) == "0 1 1 2 3 5 8");
	REQUIRE(get_fib_number(10) == "0 1 1 2 3 5 8 13 21 34 55");
	REQUIRE(get_fib_number(12) == "0 1 1 2 3 5 8 13 21 34 55 89 144");
}