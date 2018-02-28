#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int sum(int v1, int v2);

int sum(int v1, int v2){
  return v1 + v2;
}

TEST_CASE( "Sum of 0 plus 1", "[single-file]" ) {
    REQUIRE( sum(0,0) == 0 );
}



/*
Compile:

  g++ -std=c++11 -o sum_numbers.exe -I ../include/ sum_numbers.cpp  

Run:

  ./sum_numbers.exe 
  
Output:

===============================================================================
All tests passed (1 assertion in 1 test case)

*/