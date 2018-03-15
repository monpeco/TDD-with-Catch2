#define CATCH_CONFIG_MAIN

#include <iostream>
#include <cmath>
#include "catch.hpp"

const int epsilon = 0.00001;

double miles_to_kms(double _miles);


TEST_CASE("Test miles_to_kms", "Given a distance in miles, returns the distance in Kilometers"){
  REQUIRE( fabs(miles_to_kms(0.0) - 0.0) <= std::numeric_limits<double>::epsilon());
  REQUIRE( fabs(miles_to_kms(3.0) - 4.8280) <= std::numeric_limits<double>::epsilon());
  REQUIRE( fabs(miles_to_kms(5.0) - 8.0467) <= std::numeric_limits<double>::epsilon());
  REQUIRE( fabs(miles_to_kms(-9.0) - (-14.4840)) <= std::numeric_limits<double>::epsilon());
}

/*  double -> double
*   Transform a distance in Miles to its equivalent in Kilometers
*/
double miles_to_kms(double _miles){

  return 0;
}
