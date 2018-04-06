#include <iostream>
#include <string>
#include <sstream>

//using namespace std;

std::string decimal_to_hex_digit( std::string &_decimal);

int main(){
  
  std::string _decimal("8");
  
  std::string result = decimal_to_hex_digit(_decimal);
  
  std::cout << decimal_to_hex_digit(_decimal) << std::cout;
  
  return 0;
}

std::string decimal_to_hex_digit( std::string &_decimal){
  
  const std::string hexdigits = "0123456789abcdef";
  std::string::size_type n = 0;
  char digit = 0;
  std::stringstream(_decimal) >> n;
  
  if(n < hexdigits.size())
    digit = hexdigits[n];
    
  std::string s(1, digit);

  return _decimal;
}

/*
if ([n] == ' '){
hex_to_dec(buff)
}

if(n == size -1){
hex_to_dec(buff)
}

else{
buff += [n]
}
*/