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
  
  int array1[] = {1, 3, 5, 6, 3, 6, 7, 8, 9, 7};
  int length1{10};
  
  int most_popular = popular(length1, array1);
  std::cout << "most_popular: " << most_popular << std::endl;

  return 0;
}

int popular(int numbers_size, int *numbers){
  
  std::cout << "Original array: " << std::endl;
  for(int i=0; i<numbers_size; i++){
    //std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
  }
  
  std::sort(numbers,numbers+numbers_size);
  int count{0}, popular_count{0}, most_popular{numbers[0]};

  std::cout << "sorted array: " << std::endl;
  for(int i=0; i<numbers_size-1; i++){
    std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
    if(numbers[i] == numbers[i+1]){
      count++;  std::cout << "[" << count << "]" << std::endl;
      if(count>popular_count){
        popular_count = count;
        most_popular = numbers[i];
        std::cout << "[" << most_popular << "]" 
                  << " in position " << i 
                  << " With count: " << count
                  << " With popular_count: " << popular_count << std::endl;
      }
    }else{
      
        count=0;
     
    }
  }
  
	return most_popular;
}