//about template

//find max
#include<iostream>
using namespace std;

template <T>
T getMax(T a,T b)
{
    return a>b?a:b;
}

int main()
{
    int a=1,b=2,c;
    double x=1.1,y=2.2,z;
    char l='l',m='m',n;

    cout<<getMax(a,b)<<endl;
    cout<<getMax(x,y)<<endl;
    cout<<getMax(l,m)<<endl;
    return 0;
}