//about template

//find min
#include <iostream>
using namespace std;

template <typename T>
T GetMax (T a, T b) {
  return (a<b?a:b);
}

int main () {
  int i=5, j=6, k;
  double l=1.1, m=5.5, n;
  char a='a',b='b',c;
  k=GetMax(i,j);
  n=GetMax(l,m);
  c=GetMax(a,b);
  cout << k << endl;
  cout << n << endl;
  cout << c << endl;
  return 0;
}