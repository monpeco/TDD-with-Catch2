#define CATCH_CONFIG_MAIN

#include <iostream>
#include <cmath>
#include <sstream>
#include "catch.hpp"

std::string decimal_to_hex( std::string &_decimal);
std::string decimal_to_hex_digit( std::string &_decimal);

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


TEST_CASE("Test decimal_to_hex case of 14 4", "Given a string that represents a series of decimal numbers, returns its hexadecimal represtation"){
  std::string str("14 4");
  std::string rstr = str;
  REQUIRE( decimal_to_hex(rstr) == "e 4");
}


TEST_CASE("Test decimal_to_hex case of 1 0 9 15", "Given a string that represents a series of decimal numbers, returns its hexadecimal represtation"){
  std::string str("1 0 9 15");
  std::string rstr = str;
  REQUIRE( decimal_to_hex(rstr) == "1 0 9 f");
}

/*  string -> string
*   Given a string that represents a series of decimal numbers, returns its hexadecimal represtation
*/
std::string decimal_to_hex( std::string &_decimal){
  return "";
}


TEST_CASE("Test decimal_to_hex_digit case of 0", "Given a string that represents a single decimal digit, returns its hexadecimal represtation"){
  std::string str("0");
  std::string rstr = str;
  REQUIRE( decimal_to_hex_digit(rstr) == "0");
}

TEST_CASE("Test decimal_to_hex_digit case of 7", "Given a string that represents a single decimal digit, returns its hexadecimal represtation"){
  std::string str("7");
  std::string rstr = str;
  REQUIRE( decimal_to_hex_digit(rstr) == "7");
}

TEST_CASE("Test decimal_to_hex_digit case of 15", "Given a string that represents a single decimal digit, returns its hexadecimal represtation"){
  std::string str("15");
  std::string rstr = str;
  REQUIRE( decimal_to_hex_digit(rstr) == "f");
}

/*  string -> string
*   Given a string that represents a single decimal digit, returns its hexadecimal represtation
*/
std::string decimal_to_hex_digit( std::string &_decimal){
  
  const std::string hexdigits = "0123456789abcdef";
  std::string::size_type n = 0;
  char digit = 0;
  std::stringstream(_decimal) >> n;
  
  if(n < hexdigits.size())
    digit = hexdigits[n];
    
  std::string s(1, digit);

  return s;
}
