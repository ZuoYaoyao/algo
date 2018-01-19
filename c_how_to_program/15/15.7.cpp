/*
The unary score resolution operator is used to access 
a global variable.In particular,the unary scope resolution
opeartor is useful when a global variable needs to be accessed
and a local variable has the same name.

A demo is as follows.
*/
#include<iostream>

using namespace std;

int global = 1;

int main()
{
    int global = 2;
    cout<<::global<<endl;
    //the result displays 1
    return 0;
}