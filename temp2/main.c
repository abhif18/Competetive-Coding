#include <stdio.h>
#include <stdlib.h>
typedef long long int myint;
myint c1=0,c2=0;
myint findBits(myint n)
{
    myint t=n;
    c2=0;
    while(n)
    {
        c2+=(n&1);
        n>>=1;
    }
    printf("\nNo of set bits in %lld is %lld\n",t,c2);
    return c2;
}
int main()
{
    myint x=17;
    printf("%d",(x&1));
   /* while(n!=-1)
    {
        scanf("%lld",&n);
        while(findBits(n)>1)
        n<<=1;
    }*/
    //printf("Hello world!\n");
    return 0;
}
