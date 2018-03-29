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

TEST_CASE("Test decimal_to_hex case of 0", "Given a string that represents a series of decimal numbers, returns its hexadecimal represtation"){
  std::string str("0");
  std::string rstr = str;
  REQUIRE( decimal_to_hex(rstr) == "0");
}

TEST_CASE("Test decimal_to_hex case of 2", "Given a string that represents a series of decimal numbers, returns its hexadecimal represtation"){
  std::string str("2");
  std::string rstr = str;
  REQUIRE( decimal_to_hex(rstr) == "2");
}


TEST_CASE("Test decimal_to_hex case of 15", "Given a string that represents a series of decimal numbers, returns its hexadecimal represtation"){
  std::string str("15");
  std::string rstr = str;
  REQUIRE( decimal_to_hex(rstr) == "f");
}

/*  string -> string
*   Given a string that represents a series of decimal numbers, returns its hexadecimal represtation
*/
std::string decimal_to_hex( std::string &_decimal){
  return "";
}

