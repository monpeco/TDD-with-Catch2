/*
* 2)	Given a list o words, return a list of word ("YES" or "NO") responding if each 
* given word is a palindrome or not.

* char** palindrome(int words_size, char** words) {
* 	// complete
* }
*/

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"

char** palindrome(int words_size, char** words);

TEST_CASE("Base case: palindrome(int words_size, char** words)", "Base case"){
  char *array0[] = {"house", "radar", "cart"};
  int length0{3};
  REQUIRE( palindrome(length0, array0) == ["house", "radar", "cart"] );
}

/*  int, char** -> char**
*   Iterate over the array provided, and return an array of "YES" or "NO" after evaluating
*   if each element of the array is a palindrome
*/
char** palindrome(int words_size, char** words) {
  char** ppBuffer = {};
  ppBuffer = new char*[1024];
  
  return ppBuffer;
}