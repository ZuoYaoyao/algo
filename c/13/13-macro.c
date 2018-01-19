#include<stdio.h>
#include<assert.h>

//写到宏不得不提内连了
//在c中,为了解决一些频繁调用的小函数大量消耗栈空间或是叫栈内存的问题,
//特别的引入了inline修饰符

#define PI 3.14159
#define area(x)             ((x)*(x)*PI)
#define sum(x,y)            ((x)+(y))
#define min(x,y)            (x<y?x:y)
#define min3(x,y,z)         (x<y)?(x<z?x:z):(y<z?y:z)
#define printstr(str)       (printf("%s",str))
#define printarr(a,size)    while(i<size){printf("%d ",a[i]); i++;}
#define sumarr(a,size)      while(i<size){sum+=a[i];i++;}

#define nameid(id) name##id
//#define _DEBUG_

int main()
{
    #line 100
    int sum = 0;
    int i = 0;
    int a[] = {1,2,3,4,5};

    
    
    #ifdef _DEBUG_
    #warning we do not care warning
    #error we just care about error
    assert(i>0);
    #endif

    printf("%lf\n",area(3));
    printf("%d\n",min(1,2));
    printf("%d\n",min3(1,2,3));
    printstr("this is a str\n");
    printarr(a,5);
    i = 0;
    sumarr(a,5);
    printf("%d\n",sum);

    
    //print predefined macros
    printf("\n该行代码行号：%d\n",__LINE__);
    printf("文件名：%s\n",__FILE__);
    printf("日期：%s\n",__DATE__);
    printf("时间：%s\n",__TIME__);
    printf("是否支持标准C：%d\n",__STDC__);
    int name2 = 1;
    printf("%d\n",nameid(2));
}

/*
//##的妙用

#include <stdio.h>  
   
#define STRUCT(type) typedef struct _tag_##type type;\
struct _tag_##type  
   
STRUCT(Student)  
{  
    char* name;  
    int id;  
};  
   
int main()  
{  
      
    Student s1;  
    Student s2;  
      
    s1.name = "s1";  
    s1.id = 0;  
      
    s2.name = "s2";  
    s2.id = 1;  
      
    printf("%s\n", s1.name);  
    printf("%d\n", s1.id);  
    printf("%s\n", s2.name);  
    printf("%d\n", s2.id);  
   
    return 0;  
}  

//预编译后：
typedef struct _tag_Student Student;struct _tag_Student  
{  
    char* name;  
    int id;  
};  
   
int main()  
{  
   
    Student s1;  
    Student s2;  
   
    s1.name = "s1";  
    s1.id = 0;  
   
    s2.name = "s2";  
    s2.id = 1;  
   
    printf("%s\n", s1.name);  
    printf("%d\n", s1.id);  
    printf("%s\n", s2.name);  
    printf("%d\n", s2.id);  
   
    return 0;  
}  
//这样使用它，相当于扩展了C语言，能用一种“新”的方式去定义结构体，
//高通以前就用过这种方式，可提高代码的可读性与可维护性！
//看到预编译后的代码，可能会有疑问，可以在结构体定以前就对结构体使用typedef定义别名么？
//实际上是可以的，typedef关键字可以随意使用，只要被重定义的类型有被声明就行！
*/