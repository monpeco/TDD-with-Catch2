#define CATCH_CONFIG_MAIN
#include "catch.hpp"

unsigned int factorial(unsigned int num);

unsigned int factorial(unsigned int num){
  return num > 1 ? factorial(num-1)*num : 1;
}


TEST_CASE( "Factorial are computed", "[factorial]" ) {
    REQUIRE( factorial(0) == 1 );
    REQUIRE( factorial(2) == 2 );
    REQUIRE( factorial(3) == 6 );
    REQUIRE( factorial(10) == 3628800  );
}



/*
Compile:

  g++ -std=c++11 -o factorial.exe -I ../include/ factorial.cpp  

Run:

  ./factorial.exe 
  
Output:


===============================================================================
All tests passed (4 assertions in 1 test case)

*/