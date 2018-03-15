#define CATCH_CONFIG_MAIN

#include <iostream>
#include <cmath>
#include "catch.hpp"

const double epsilon = 0.0001;

double miles_to_kms(double _miles);
double kms_to_miles(double _kms);

TEST_CASE("Test miles_to_kms", "Given a distance in miles, returns the distance in Kilometers"){
  REQUIRE( fabs(miles_to_kms(0.0) - 0.0) <= epsilon);
  REQUIRE( fabs(miles_to_kms(3.0) - 4.8280) <= epsilon);
  REQUIRE( fabs(miles_to_kms(5.0) - 8.0467) <= epsilon);
  REQUIRE( fabs(miles_to_kms(-9.0) - (-14.4840)) <= epsilon);
}

/*  double -> double
*   Transform a distance in Miles to its equivalent in Kilometers
*/
double miles_to_kms(double _miles){
  return _miles * 1.609344;
}



TEST_CASE("Test kms_to_miles", "Given a distance in Kilometers, returns the distance in Miles"){
  REQUIRE( fabs(kms_to_miles(0.0) - 0.0) <= epsilon);
  REQUIRE( fabs(kms_to_miles(3.0) - 1.8641) <= epsilon);
  REQUIRE( fabs(kms_to_miles(5.0) - 3.1068) <= epsilon);
  REQUIRE( fabs(kms_to_miles(-9.0) - (-5.5923)) <= epsilon);
}

/*  double -> double
*   Transform a distance in Kilometers to its equivalent in Miles
*/
double kms_to_miles(double _kms){
  return 0;
}
