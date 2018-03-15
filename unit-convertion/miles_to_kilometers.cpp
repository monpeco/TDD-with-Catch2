#define CATCH_CONFIG_MAIN

#include <iostream>
#include "catch.hpp"

const int epsilon = 0.00001;

double miles_to_kms(double _miles);


TEST_CASE("Test miles_to_kms", "Given a distance in miles, returns the distance in Kilometers"){
  REQUIRE( miles_to_kms(0.0) - 0.0 <= epsilon);
  REQUIRE( miles_to_kms(3.0) - 4.8280 <= epsilon);
  REQUIRE( miles_to_kms(5.0) - 8.0467 <= epsilon);
  REQUIRE( miles_to_kms(-9.0) - (-14.4840) <= epsilon);
}

/*  double -> double
*   Transform a distance in Miles to its equivalent in Kilometers
*/
double miles_to_kms(double _miles){

  return 0;
}
