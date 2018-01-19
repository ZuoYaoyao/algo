#include<iostream>
using namespace std;

double cube(int);
int cube(int);


int main()
{
    cout<<"start here"<<endl;
    return 0;
}

double cube(int a)
{
    return a;
}

//error: functions that differ only in their return type 
//cannot be overloaded
int cube(int a)
{
    return a;
}