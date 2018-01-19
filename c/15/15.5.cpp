#include<iostream>

using namespace std;

inline double circleArea(double r)
{
    return 3.1415926*r*r;
}

int main()
{
    double r;
    cin>>r;
    cout<<"area: "<<circleArea(r)<<endl;
    return 0;
}
