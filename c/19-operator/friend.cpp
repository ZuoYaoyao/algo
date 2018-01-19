#include <iostream>
using namespace std;
 
class Box 
{
   double width;
   
   public:
      friend void printWidth( Box box );
      void setWidth( double wid );
};

// 成员函数定义
void Box::setWidth( double wid ) 
{
   width = wid;
}

// 注意：printWidth()不是类的成员函数
void printWidth( Box box ) 
{
   /* 因为是友元，所以可以获取到private */
   cout << "Width of box : " << box.width <<endl;
}

int main() 
{
   Box box;
   box.setWidth(10.0);
   printWidth( box );
   return 0;
}