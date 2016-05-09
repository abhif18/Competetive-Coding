#include <stdio.h>
#include <stdlib.h>
int s[20],tmp[20];
void mergeSort(int l,int h)
{
    int mid;
    if(l<h)
    {
        printf("Inside while of mergeSort()\n");
        mid=(l+h)/2;
        mergeSort(l,mid);
        mergeSort(mid+1,h);
        merge(l,mid,mid+1,h);
        copy(l,h);
    }
}
void merge(int l1,int h1,int l2,int h2)
{
    //printf("Inside merge()\n");
    int i=l1,j=l2,k=l1;
    while((i<=h1)&&(j<=h2))
    {
        if(s[i]<=s[j])
            tmp[k++]=s[i++];
        else
            tmp[k++]=s[j++];
    }
    while(i<=h1)
        tmp[k++]=s[i++];
    while(j<=h2)
        tmp[k++]=s[j++];
}
void copy(int l,int h)
{
    //printf("Inside Copy()\n");
    int i;
    for(i=l;i<=h;i++)
        s[i]=tmp[i];
}
int main()
{
    int n,i;
    printf("Hello world!\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&s[i]);
   mergeSort(0,n-1);
   for(i=0;i<n;i++)
    printf("%d\n",s[i]);
        return 0;
}
