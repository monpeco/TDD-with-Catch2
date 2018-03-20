/*
2)	Given a list o words, return a list of word ("YES" or "NO") responding 
if each given word is a palindrome or not.

char** palindrome(int words_size, char** words) {
	// complete
}

Ej : ["house", "radar", "cart"] => ["NO", "YES", "NO"]
*/

#include <iostream>
#include <cstring>

using std::string; using std::cout; using std::endl;

char** palindrome(int words_size, char** words);
bool is_palindrome(char* word);

int main(){
  char *array_words[] = {"house", "radar", "cart"};
  int array_length{3};
  char** ppwords = array_words;
  
  ppwords = palindrome(array_length, ppwords);

  for(int i=0; i<array_length; i++){
    cout << "ppwords: "  << *(ppwords+i) << endl;
  }
  
  delete[] ppwords;
  return 0;
}

char** palindrome(int words_size, char** words) {

	char** pplwords = new char*[words_size];

  for(int i=0; i<words_size; i++){
    cout << "words: "  << *(words+i) << endl;
    if(is_palindrome( *(words+i) )){
      *(pplwords+i) = "YES";
    }else{
      *(pplwords+i) = "NO";
    }
    
  }

	return pplwords;
}

bool is_palindrome(char* _word){
  
  int i=0, j=strlen(_word) - 1;
  
  if ((_word == NULL) || (_word[0] == '\0')){
      return false;
  }
  
  while (i < j){
    if (_word[i] != _word[j]){
        return false;
    }
    i++;
    j--;
  }
    
  return true;
}