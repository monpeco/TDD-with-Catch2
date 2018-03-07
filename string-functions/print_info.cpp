#define CATCH_CONFIG_MAIN

#include <string>
#include "catch.hpp"

std::string print_info(std::string* stringArray, unsigned int size);


TEST_CASE("print simple","print a simple string based on a parameter"){
  std::string s[] = {"hi", "there", "here", "another"};
  REQUIRE( print_info(s,2) == "hi");
  
}


std::string print_info(std::string* stringArray, unsigned int size){
  std::string result = (*stringArray);
  return result;
}