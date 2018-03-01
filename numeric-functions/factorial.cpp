#define CATCH_CONFIG_MAIN
#include "catch.hpp"

unsigned int factorial(unsigned int num);

unsigned int factorial(unsigned int num){
  return num <= 1 ? num : factorial(num-1)*num;
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


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
factorial.exe is a Catch v2.1.2 host application.
Run with -? for options

-------------------------------------------------------------------------------
Factorial are computed
-------------------------------------------------------------------------------
factorial.cpp:11
...............................................................................

factorial.cpp:12: FAILED:
  REQUIRE( factorial(0) == 1 )
with expansion:
  0 == 1

===============================================================================
test cases: 1 | 1 failed
assertions: 1 | 1 failed

*/