#include<iostream>
using namespace std;
//传值：另外开一个变量，函数结束再随栈释放
//传饮用：直接拿地址

int tripleByValue(int); //function prototype
int tripleByRef(int &); //function prototype

int main()
{
    int v;
    cin>>v;
    cout<<"before call byvalue: "<<v<<endl;
    cout<<tripleByValue(v)<<endl;
    cout<<"after call byvalue: "<<v<<endl;
    cout<<endl;
    cout<<"before call byref: "<<v<<endl;
    cout<<tripleByRef(v)<<endl;
    cout<<"after call byref: "<<v<<endl;
}


int tripleByValue(int v)
{
    v *= v;
    return v;
}

int tripleByRef(int &v)
{
    v *= v;
    return v;
}