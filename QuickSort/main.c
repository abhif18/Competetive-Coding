#include <stdio.h>
#include <stdlib.h>
void swap(int* a,int* b)
{
    int* t=a;
    a=b;
    b=t;
}
void display(int* a,int len)
{
    int i;
    for(i=0;i<len;i++)
        printf("%d",a[i]);
}
int partition(int* a,int l,int h)
{
    int b=a[h],i=l-1,j=l;
    for(;j<h;j++)
    {
        if(a[j]<x)
        {
            swap(&a[j],&a[i]);
            i++;
        }
    }
    swap()
}
void quicksort(int* a,int l,int h)
{

}
int main()
{
   int a[20],i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",(a+i));
   quicksort(a,0,n-1);
    return 0;
}
