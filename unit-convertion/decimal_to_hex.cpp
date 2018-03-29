#define CATCH_CONFIG_MAIN

#include <iostream>
#include <cmath>
#include "catch.hpp"

std::string decimal_to_hex( std::string &_decimal);

TEST_CASE("Test base case", "Given a string that represents a series of decimal numbers, returns its hexadecimal represtation"){
  std::string str("");
  std::string rstr = str;
  REQUIRE( decimal_to_hex(rstr) == "");
}


/*  string -> string
*   Given a string that represents a series of decimal numbers, returns its hexadecimal represtation
*/
std::string decimal_to_hex( std::string &_decimal){
  return "";
}

