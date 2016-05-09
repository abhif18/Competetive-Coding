#include <stdio.h>
#include <stdlib.h>
int binSearch(int* a,int l,int h,int n)
{
    int mid=(l+h)/2;
   while(l<h)
   {
       mid=(l+h)/2;
       if(n<a[mid])
        h=mid-1;
       else if(n>a[mid])
        l=mid+1;
       else
        {
            l=mid;
            break;
        }
   }
   return l;
}
int main()
{
    int a[10],len,mid,n,i;
    printf("Enter length of array\n");
    scanf("%d",&len);
     printf("Enter elements of array\n");
     for(i=0;i<len;i++)
        scanf("%d",(a+i));
        printf("Enter n\n");
        scanf("%d",&n);
     printf("%d",binSearch(a,0,len,n));
    return 0;
}
