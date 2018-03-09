#define CATCH_CONFIG_MAIN

#include <iostream>
#include <fstream>
#include "catch.hpp"

std::string print_months(std::string file_name);
std::string print_month(std::string file_line);
std::string print_days(std::string file_line);

TEST_CASE("Test print_months()", "Print the name and number days of the monts in the months file"){
  REQUIRE( print_months("months.txt") ==  "There are 31 days in January."
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

TEST_CASE("Test print_months() with financial months", "Print the name and number days of the monts in the financial months file"){
  REQUIRE( print_months("months_f.txt") ==  "There are 30 days in January."
                                            "There are 28 days in February."
                                            "There are 30 days in March."
                                            "There are 30 days in April."
                                            "There are 30 days in May."
                                            "There are 30 days in June."
                                            "There are 30 days in July."
                                            "There are 30 days in August."
                                            "There are 30 days in September."
                                            "There are 30 days in October."
                                            "There are 30 days in November."
                                            "There are 30 days in December.");
}

/*  String -> String
*   Produces the formatted output of the months' info stored in the months.txt file
*/
std::string print_months(std::string file_name){
  std::ifstream is(file_name);
  std::string file_line="";
  std::string result="";
  
  while(getline(is, file_line))
  {
    result += "There are [" +  print_days(file_line) + "] days in [" + print_month(file_line) + "].";
  }
    
  return result;
}


TEST_CASE("Test print_month()", "Prints the month, extracted of a file_line"){
  REQUIRE( print_month("January 31") ==  "January");
  REQUIRE( print_month("February 28") ==  "February");
  REQUIRE( print_month("April 30") ==  "April");
}

/*  String -> String
*   Extracts the month out of a file_line 
*/
std::string print_month(std::string file_line){
  std::string month = "March";
  for(int i = 0; i < file_line.size(); ++i) {
    if(file_line[i] == ' '){
      month = file_line.substr(0, i);
    }
  }
  return month;
}

TEST_CASE("Test print_days()", "Prints the number of days, extracted of a file_line"){
  REQUIRE( print_days("January 31") ==  "31");
  REQUIRE( print_days("February 28") ==  "28");
  REQUIRE( print_days("April 30") ==  "30");
}

/*  String -> String
*   Extracts the days number out of a file_line 
*/
std::string print_days(std::string file_line){
  std::string days = "30";
  
  return days;
}

/*

Compile:

  g++ -std=c++11 -o month_days.exe -I ../include/ month_days.cpp

*/