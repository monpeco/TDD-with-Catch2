#define CATCH_CONFIG_MAIN
#include "catch.hpp"

unsigned int factorial(unsigned int num);

unsigned int factorial(unsigned int num){
  return num <= 1 ? num : factorial(num-1)*num;
}


TEST_CASE( "Factorial are computed", "[factorial]" ) {
    REQUIRE( factorial(1) == 1 );
}



/*
Compile:

  g++ -std=c++11 -o factorial.exe -I ../include/ factorial.cpp  

Run:

  ./factorial.exe 
  
Output:

===============================================================================
All tests passed (1 assertion in 1 test case)

*/