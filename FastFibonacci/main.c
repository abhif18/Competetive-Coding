#include <stdio.h>
#include <stdlib.h>
void myFunc(int n)
{
    long long int a=1,b=1,c=0,count=0;
    while(1)
    {
        if(n>a&&n<b)
        {
            printf("%lld\n",count);
            break;
        }
        c=a+b;
        a=b;
        b=c;
        count++;
    }
}
int main()
{
    long long int t,l;
      scanf("%lld",&t);
      while(t--)
      {
          scanf("%lld",&l);
          myFunc(l);
      }
    return 0;
}
