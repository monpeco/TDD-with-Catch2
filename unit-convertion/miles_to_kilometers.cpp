#define CATCH_CONFIG_MAIN

#include <iostream>
#include "catch.hpp"


double miles_to_kms(double _miles);


TEST_CASE("Test miles_to_kms", "Given a distance in miles, returns the distance in Kilometers"){
  REQUIRE( miles_to_kms(0.0) ==  0.0);
  REQUIRE( miles_to_kms(5.0) ==  8.0467);
}

/*  double -> double
*   Transform a distance in Miles to its equivalent in Kilometers
*/
double miles_to_kms(double _miles){

  return 0;
}
