#include "question4.h"
#include <iostream>
using std::cout; using std::cin; using std::string;

bool test_config()
{
    return true;
}

int run_fib_number()
{   
    auto choice = 0;

    do
    {
        
        cout<<"Please enter a number 1-15. Or 0 to Exit\n ";
        cin>>choice;
        if (choice == 0)
        {
            cout<<"Exiting...\n";
            abort();
        }

        return choice;

    }while(choice >= 1 || choice <= 15);
}
    
    
string get_fib_number(int input)
{
    int num1 = 0;
    int num2 = 1;
    int fib_term;

    

    

   
    if (input == 1)
    { 
        return "1";
    }
    else if (input == 0)
    {
        return "0";
    }
       
    string fib_string = "0 1 ";

    for (int i = 2; i <= input; i++)
   {
        
        fib_term = num1 + num2;
        num1 = num2;
        num2 = fib_term;
        fib_string += std::to_string(fib_term) + " ";
        /* Once you make sure the user didn't put 0 or 1, every
        fibonacci sequence will include it no matter what */

   }
        fib_string += "\b";
        
   return fib_string;
}
