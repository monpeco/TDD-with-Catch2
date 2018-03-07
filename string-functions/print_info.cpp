#define CATCH_CONFIG_MAIN

#include <string>
#include "catch.hpp"

std::string print_info(std::string p);


TEST_CASE("print simple","print a simple string based on a parameter"){
  REQUIRE( print_info("gg") == " ");
  
}


std::string print_info(std::string p){
  
  return " ";
}