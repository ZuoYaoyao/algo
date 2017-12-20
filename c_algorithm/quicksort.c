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
    //l>=r，完成一遍扫描,以a[ml]为轴，大的放右边，小的放左边
    while(l<r)
    {
        //如果停了，说明左边有大的，
        //一上来++，不和自己比，自己指a[ml]
        while(++l<mr&&a[l]<=a[ml]);
        
        //如果停了，说明右边有小的
        //一上来--，因为输入的是size
        while(--r>ml&&a[r]>=a[ml]);
        
        //此时仍未完成一次遍历，交换
        if(l<r)swap(&a[l],&a[r]);
    }

    //因为做比较元的是a[ml]，所以跟右边的换
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