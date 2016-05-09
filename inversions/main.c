#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int a[MAX],b[MAX],len,count=0;
int mergeSort(int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        count=mergeSort(l,mid);
        mergeSort(mid+1,h);
        merge(l,mid,mid+1,h);
        copy(l,h);
    }
}
void merge(int l1,int h1,int l2,int h2)
{
    int i=l1,j=l2,k=l1;
    while((i<=h1)&&(j<=h2))
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else{
            b[k++]=a[j++];
         count+=(h1-i);
        }
    }
    while(i<=h1){
        b[k++]=a[i++];
    }
    while(j<=h2){
        b[k++]=a[j++];
    }
}
void copy(int l,int h)
{
    int i;
    for(i=l;i<=h;i++)
        a[i]=b[i];
}
int main()
{
    int i;
    scanf("%d",&len);
    for(i=0;i<len;i++)
        scanf("%d",(a+i));
          for(i=0;i<len;i++)
        printf("%d\t",a[i]);
        printf("\n");
    mergeSort(0,len-1);
     for(i=0;i<len;i++)
        printf("%d\t",a[i]);
      printf("\nNo of Inversions are : %d",count);
    return 0;
}
