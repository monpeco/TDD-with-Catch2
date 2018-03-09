#define CATCH_CONFIG_MAIN

#include <iostream>
#include <fstream>
#include "catch.hpp"

std::string print_months(std::string file_name);

TEST_CASE("Test print_months()", "Print the name and number days of the monts in the months file"){
  REQUIRE( print_months("infile.txt") ==  "There are 31 days in January."
                                          "There are 28 days in February."
                                          "There are 31 days in March."
                                          "There are 30 days in April."
                                          "There are 31 days in May."
                                          "There are 30 days in June."
                                          "There are 31 days in July."
                                          "There are 31 days in August."
                                          "There are 30 days in September."
                                          "There are 31 days in October."
                                          "There are 30 days in November."
                                          "There are 31 days in December.");
}

std::string print_months(std::string file_name){
  return "";
}

/*

Compile:

  g++ -std=c++11 -o month_days.exe -I ../include/ month_days.cpp

*/