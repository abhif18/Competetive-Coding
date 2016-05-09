#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[100],b[100];
int len;
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
void borrow(int n)
{
    //printf("inside Borrow\n");
    int i=n+1;
    while(a[i]==48){
        a[i]=57;
        //printf("Setting a[%d]=%c\n",i,a[i]);
     i++;
    }
    a[i]--;
}
void substract()
{
    int i;
    char tmp;
    for(i=0;i<len;i++)
    {
        if(b[i]==0)// in case smaller no ends then a[i]=a[i]-b[i]+48 == a[i]-0+48 that will give wrong result.thus to make b[i]=0
            b[i]=48;// set b[i]=48
        if(a[i]>=b[i])
        {
            tmp=a[i];
            a[i]=a[i]-b[i]+48;
        //printf("%c-%c=%c\n",tmp,b[i],a[i]);
        }
        else
        {
            if(a[i]==48)
            borrow(i);
            else
            a[i+1]--;
            a[i]=(10+(a[i]-48)-(b[i]-48)+48);
      //      printf("a[%d]-b[%d]=%c\n",i,i,a[i]);
        }
    }
}
int main()
{
    printf("Hello world!\n");
        memset(a,48,10);
    memset(b,48,10);
    scanf("%s %s",a,b);
    reverse(a,strlen(a));
   // printf("After Reverse a=%s\n",a);
    reverse(b,strlen(b));
    //printf("After Reverse b=%s\n",b);
    len=strlen(a);
   // a[len]=48;
    substract();
        reverse(a,len);
    printf("%s",a);
  return 0;
}
