/*
int popular(int numbers_size, int *numbers){
	// complete
}

Ej: 10, [1, 3, 5, 6, 3, 6, 7, 8, 9, 6] => 6 (six is the most popular number)
*/

#include <iostream>
#include <algorithm>

int popular(int numbers_size, int *numbers);

int main(){
  
  int array1[] = {1, 3, 5, 6, 3, 6, 7, 8, 9, 6};
  int length1{10};
  
  int most_popular = popular(length1, array1);
  
  return 0;
}

int popular(int numbers_size, int *numbers){
  
  std::cout << "Original array: " << std::endl;
  for(int i=0; i<numbers_size; i++){
    std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
  }
  
  std::sort(numbers,numbers+10);
  
  std::cout << "sorted array: " << std::endl;
  for(int i=0; i<numbers_size; i++){
    std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
  }
  
	return 0;
}