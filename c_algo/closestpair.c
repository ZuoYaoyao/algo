#include<stdio.h>
#include<math.h>

struct point{
    float x;
    float y;
};
typedef struct point Point;
float distance(Point a,Point b);

int main()
{
    Point a[10];
    for(int i=0;i<10;i++)
    {
        a[i].x = i*1;
        a[i].y = i*2;
    }
    a[8].x -= 2;
    a[8].y -= 8;
    printf("%f\n\n",distance(a[0],a[8]));

    for(int i=0;i<10;i++)
    {
        
        printf("%f %f\n",a[i].x,a[i].y);
    }
}

float distance(Point a,Point b)
{
    float dx,dy;
    dx = a.x-b.x;
    dy = a.y-b.y;
    printf("%f %f\n",dx*dx,dy*dy);
    return sqrt(dx*dx+dy*dy);
}