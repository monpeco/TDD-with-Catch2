#define CATCH_CONFIG_MAIN

#include <string>
#include "catch.hpp"

std::string print_info(std::string* stringArray, unsigned int size);


TEST_CASE("print simple","print a simple string based on a parameter"){
  std::string s[] = {"hi", "there", "here", "another"};
  REQUIRE( print_info(s,0) == ",");
  REQUIRE( print_info(s,1) == "hi,");
  REQUIRE( print_info(s,2) == "hi,there,");
  REQUIRE( print_info(s,3) == "hi,there,here,");
  REQUIRE( print_info(s,4) == "hi,there,here,another,");
  
}


std::string print_info(std::string* stringArray, unsigned int size){
  std::string result{""};
  
  if (size==0) result = ",";
  
  for(int i=0; i<size; i++){
    result += (stringArray[i]) + ",";
  }
  
  return result;
}

/*

Compile:

  g++ -std=c++11 -o print_info.exe -I ../include/ print_info.cpp

*/