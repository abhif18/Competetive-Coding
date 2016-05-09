#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char s[200];
int row()
{
    int i=0,len;
    long long int p,a,c=0,b,tmp;
    scanf("%lld",&a);
    scanf("%lld",&b);
    while(a)
    {
        s[i]=(a%10)+48;
        a/=10;
        i++;
    }
    printf("Reverse s=%s\n",s);
    len=strlen(s);
    c=0;
    for(i=0;i<len;i++)
    {
        tmp=c+(s[i]-48)*b;
        printf("tmp= %lld\n",tmp);
        p=(tmp%10)+48;
        printf("p= %c\n",p);
        s[i]=p;
        printf("s[%d]= %c\n",i,p);
        c=tmp/10;
        printf("c= %lld\n",c);
    }
    while(c)
    {
        s[i]=(c%10)+48;
        c/=10;
        i++;
    }
    printf("\n\n%s\n",s);
    printf("Hello world!\n");
    return 0;
}

