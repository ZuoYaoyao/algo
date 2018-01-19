// divide-by-zero exceptions.
#include <iostream>
#include "DivideByZeroException.h"
using namespace std;

// perform division and throw DivideByZeroException object if
// divide-by-zero exception occurs
double quotient( int numerator, int denominator )
{
// throw DivideByZeroException if trying to divide by zero
if ( denominator == 0 )
    throw DivideByZeroException(); // terminate function

 // return division result
return static_cast< double >( numerator ) / denominator;
} // end function quotient

 int main()
{
 int number1; // user-specified numerator
 int number2; // user-specified denominator
 double result; // result of division

 cout << "Enter two integers (end-of-file to end): ";

 // enable user to enter two integers to divide
 while ( cin >> number1 >> number2 )
 {
     try
     {
         result = quotient(number1,number2);
         cout<<"The Quotinet is:"<<result<<endl;
     }
     catch(DivideByZeroException &divideByZeroException)
     {
         cout << "Exception occurred: "
              << divideByZeroException.what() << endl;
     }
     cout << "\nEnter two integers (end-of-file to end): ";
 }

 cout << endl;
}