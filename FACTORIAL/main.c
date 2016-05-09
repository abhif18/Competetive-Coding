#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char s[1000000];
int main()
{
    long long int i=0,t,len,x,p,a,c=0,b,tmp;
    scanf("%lld",&t);
    while(t--){
    scanf("%lld",&x);
    a=x;
    i=0;
    while(x)
    {
        s[i]=(x%10)+48;
        x/=10;
        i++;
    }
    //printf("Reverse s=%s\na=%lld\n",s,a);
    len=strlen(s);
    while(a>2){
            b=a-1;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        tmp=c+(s[i]-48)*b;
     //   printf("tmp= %lld\n",tmp);
        p=(tmp%10)+48;
       // printf("p= %c\n",p);
        s[i]=p;
       // printf("s[%d]= %c\n",i,p);
        c=tmp/10;
        //printf("c= %lld\n",c);
    }
    while(c)
    {
        s[i]=(c%10)+48;
        c/=10;
        i++;
    }
    a--;
    }
    len=strlen(s);
    for(i=len-1;i>=0;i--)
    printf("%c",s[i]);
   printf("\n");
   memset(s,0,200);
    }
    return 0;
}

