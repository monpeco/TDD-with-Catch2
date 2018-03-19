/*
int popular(int numbers_size, int *numbers){
	// complete
}

Ej: 10, [1, 3, 5, 6, 3, 6, 7, 8, 9, 6] => 6 (six is the most popular number)
*/
#define CATCH_CONFIG_MAIN

#include "catch.hpp"

int popular(int numbers_size, int *numbers);

TEST_CASE("Base case: int popular(int, int *)", "Base case"){
  int array0[] = {};
  int length0{0};
  REQUIRE( popular(length0, array0) == 0 );
}

TEST_CASE("Model: int popular(int, int *)", "Model"){
  int array1[] = {1, 3, 5, 6, 3, 6, 7, 8, 9, 6};
  int length1{10};
  REQUIRE( popular(length1, array1) == 6 );
}

TEST_CASE("Test 1: int popular(int, int *)", "Test 1"){
  int array1[] = {1, 3, 5, 6, 3, 6, 7, 8, 9, 7};
  int length1{10};
  REQUIRE( popular(length1, array1) == 3 );
}

/*  int, int* -> int
*   Calculate the most popular int (mode) in an int's array, given the array and its length
*/
int popular(int numbers_size, int *numbers){
  
  int result;
  /*int order_numbers[numbers_size];
  sort_numbers(numbers_size, numbers, order_numbers);
  int result = popular_ordered(numbers_size, order_numbers);*/
  std::sort(numbers,numbers+numbers_size);
  int count{0}, popular_count{0}, most_popular{numbers[0]};

  std::cout << "sorted array: " << std::endl;
  for(int i=0; i<numbers_size-1; i++){
    std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
    if(numbers[i] == numbers[i+1]){
      count++;
      if(count>popular_count){
        popular_count = count;
        most_popular = numbers[i];
      }
    }else{
      count=0;
    }
  }
  
	return most_popular;
}



