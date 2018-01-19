#include<stdio.h>

float f(float x);    // Declare function f( )

int main( int argc, char *argv[] )
{
   int a, b;
   float c, d;

   a = 2;
   b = f( a );       // Call f( )

   printf( "f(%d) = %d\n", a, b);

   c = 2.0;
   d = f( c );       // Call f( )

   printf( "f(%f) = %f\n", c, d);
}