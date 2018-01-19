#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
PhoneNumber phone; // create object phone

cout << "Enter phone number in the form (123) 456-7890:" << endl;
cin >> phone;
cout << "The phone number entered was: ";
cout << phone << endl;
}