#include <stdio.h>
#include <stdlib.h>
typedef long long int myint;
myint count=0;
/*myint countBits(myint n)
{
    myint t=n;
    count_Bits=0;
    while(n)
    {
        count_Bits+=(n&1);
        n>>=1;
    }
    return count_Bits;
}*/
myint cook(myint a,myint b)
{
    if(a==b)
        return count;
        while(a&(a-1))
        {
            if((a&1)==1)
              a--;
        a>>=1;
        count++;
        }
        //printf("After rounding to nearest power of 2 No is Now %lld\n",a);
        if(a<b){
        a<<=1;
        count++;
        }
        if(a>b)
        {
        if((a&1)==1)
            a--;
        a>>=1;
        count++;
        }
    return cook(a,b);
}
int main()
{
    myint t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        count=cook(a,b);
        printf("%lld\n",count);
        count=0;
    }
    return 0;
}
