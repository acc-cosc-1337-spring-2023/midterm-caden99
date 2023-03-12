#include "question2.h"
#include <iostream>
using std::cout; using std::cin;
bool test_config()
{
    return true;
}



int find_gcd(int a, int b) {
  while (a != 0 && b != 0) {
      if (a > b) {
          a %= b;
      } else {
          b %= a;
      }
  }
  if (a==0){
    return b;
    
  }
  else{
    return a;
    
  }
}
