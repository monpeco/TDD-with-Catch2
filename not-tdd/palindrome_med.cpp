/*
2)	Given a list o words, return a list of word ("YES" or "NO") responding 
if each given word is a palindrome or not.

char** palindrome(int words_size, char** words) {
	// complete
}

Ej : ["house", "radar", "cart"] => ["NO", "YES", "NO"]
*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

char** palindrome(int words_size, char** words);

int main(){
  char *array0[] = {"house", "radar", "cart"};
  int length0{3};
  
  for(const string &word : array0){
    cout << "value of text: " << word << endl;
  }
  
  char *result[] = {"YEST","MAYBE","NOT"};
  char** ppBu = nullptr;
  
  ppBu = result;
  cout << "1 result: " << result << endl;
  cout << "ppBu: " << *ppBu << endl;
  cout << "ppBu: " << *(ppBu+1) << endl;
  cout << "ppBu: " << *(ppBu+2) << endl;
  
 
  
  ppBu = palindrome(3, ppBu);
  cout << "3 result: " << result << endl;
  cout << "ppBu: " << ppBu << endl;
  cout << "*ppBu: " << *ppBu << endl;
  //cout << "ppBu: " << *(ppBu+1) << endl;
  //cout << "ppBu: " << *(ppBu+2) << endl;
  
  return 0;
}

char** palindrome(int words_size, char** words) {
	char** ppBuffer = nullptr;
	ppBuffer = new char*[1024];
  cout << "2 palindrome: "  << endl;

  for(int i=0; i<words_size; i++){
    cout << "words: "  << *(words+i) << endl;
  }
  *ppBuffer = "this";
  cout << "ppBuffer: " << ppBuffer << endl;
	return ppBuffer;
}

bool is_palindrome(const char* word){
  
  return true;
}