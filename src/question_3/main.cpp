#include "question3.h"
#include <iostream>
using std::cout; using std::cin;
int main(){

  int celsius_to_convert;

  do
  {
    cout<<"Celsius Conversion\n";

    cout<<"Please enter a Celsius degree to convert or 9999 to exit.\n";
    cout<<"Celsius: ";
    cin>>celsius_to_convert;

    cout<<"\n\n";
    cout<<celsius_to_convert<<" In Farenheit is: "<<get_farenheit(celsius_to_convert)<<std::endl;


  }while(celsius_to_convert != 9999);

  return 0;
}
