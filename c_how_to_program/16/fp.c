#include <stdio.h>
 
int foo (int n);	//function prototype
 
int main(void)
{
int bar = foo(2);
printf("%d", bar);
}

int foo (int n)	//function definition
{
	return ++n;	//some operation
}