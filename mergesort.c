#include<stdio.h>

void mergesort(int a[],int l,int r);
void merge(int a[],int b[],int l,int m,int r);

int b[6];

int main()
{
    int a[]={9,8,5,3,2,1};
    
    //这里又得填真实的下标，而非array的size了
    mergesort(a,0,5);

    for(int i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }

}


void mergesort(int a[],int l,int r)
{
    if(l>=r)return;
    int m = (l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);  
    merge(a,b,l,m,r); 
    //copy step
    for(int i=l;i<=r;i++)
    {
        a[i] = b[i];
    }   
}

void merge(int a[],int b[],int l,int m,int r)
{
    int i = l,j = m+1,e = l;
    while(i<=m&&j<=r)
    {
        if(a[i]<=a[j])
        {
            b[e++]=a[i++];
        }
        else
        {
            b[e++]=a[j++];
        }
    }
    if(i>m)
    {
        for(;j<=r;j++)b[e++]=a[j];
    }
    else
    {
        for(;i<=m;i++)b[e++]=a[i];
    }
}