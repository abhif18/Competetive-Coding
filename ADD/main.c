#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char s[200],int len)
{
    int l=0,h=len-1;
    char tmp;
    while(l<=h)
    {
        tmp=s[l];
        s[l]=s[h];
        s[h]=tmp;
        l++;
        h--;
    }
}
void add(char a[200],char b[200],int len)
{
    int i=0,c=0,tmp;
    for(i=0;i<len;i++)
    {
        if(b[i]==0)
            b[i]=48;
        tmp=(c+(a[i]+b[i]-96));
        a[i]=tmp%10+48;
        c=tmp/10;
    }
    while(c)
    {
        a[i]=c%10;
        c/=10;
        i++;
    }
    len=strlen(a);
    reverse(a,len);
}
int main()
{
    int l1,l2;
    char a[200]={0},b[200]={0};
    printf("Hello world!\n");
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    reverse(a,l1);
   // printf("After Reverse a=%s\n",a);
    reverse(b,l2);
   //printf("After Reverse b=%s\n",b);
    add(a,b,l1);
    printf("%s",a);
    return 0;
}
