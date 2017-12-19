#include<stdio.h>

void swap(int *a,int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void quicksort(int a[],int l,int r)
{
    if(r<l+2)return;
    int ml,mr;
    ml = l;
    mr = r;
    while(l<r)
    {
        while(++l<mr&&a[l]<=a[ml]);
        while(--r>ml&&a[r]>=a[ml]);
        if(l<r)swap(&a[l],&a[r]);
    }
    swap(&a[r],&a[ml]);
    quicksort(a,ml,r);
    quicksort(a,l,mr);
}

int main()
{
    int a[]={8,3,6,7,1,5};
    quicksort(a,0,6);
    for(int i=0;i<6;i++)printf("%d\n",a[i]);
    return 0;
}