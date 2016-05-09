#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int t,n,count=0,c=0,pow=5;
    scanf("%lld",&t);
    while(t--){
  scanf("%lld",&n);
    c=n/pow;
   while(c){
    count=count+c;
    pow=(pow<<2)+(pow);
       c=n/pow;
    }
printf("%lld\n",count);
count =0;
pow=5;
    }
    return 0;
}
