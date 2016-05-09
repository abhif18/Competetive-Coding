#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char a[1001],b[1001],s[1001],tmp[1001];
int k=0,len_S=0;
void search(int len,int c)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(b[i]==c)
        {
            s[k]=c;
            b[i]=0;
            k++;
            len_S++;
            break;
        }
    }
}
void out()
{
    int i;
    for(i=0;i<len_S;i++)
        putchar(s[i]);
    putchar('\n');
}
void mergeSort(int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergeSort(l,mid);
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
    int i;
    for(i=l;i<=h;i++)
        s[i]=tmp[i];
}
int main()
{
    int i,l1,l2;
while(scanf("%s%s",a,b)==2)
    {
        l1=strlen(a);
        l2=strlen(b);
        for(i=0;i<l1;i++)
        search(l2,a[i]);
        mergeSort(0,len_S-1);
        out();
        k=0;
        len_S=0;
    }
    return 0;
}
