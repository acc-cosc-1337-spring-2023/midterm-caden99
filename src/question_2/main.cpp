#include "question2.h"
#include <iostream>
using std::cout; using std::cin;
int main(){

  int val1;
  int val2;

  do
  {
    cout<<"GDC Finder\n";

    cout<<"Please enter the values you would like to find the GCD of. Or -1 to exit.\n";
    cout<<"Value 1: ";
    cin>>val1;
    cout<<"Value 2: ";
    cin>>val2;


    cout<<"\n\n";
    cout<<" The greatest commond denominator is: "<<find_gcd(val1,val2);
    cout<<"\n";


  }while((val1 != -1 || val2 != -1));
  
  return 0;
}
