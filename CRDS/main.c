#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int l,t,s,mod=1000007;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&l);
        s=(((3*l*l)+l)/2)%mod;
        printf("%lld\n",s);
    }
    return 0;
}
