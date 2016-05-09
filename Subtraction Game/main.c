#include <stdio.h>
#include <stdlib.h>
int E_gcd(int a,int b)
{
    if(b)
        return E_gcd(b,a%b);
    else
        return a;
}
int main()
{
    long long int t,n,a[1001],i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld",&a[0]);
        for(i=1;i<n;i++)
        {
            scanf("%lld",&a[i]);
             a[i]=E_gcd(a[i],a[i-1]);
        }
        printf("%lld\n",a[i-1]);
    }
    return 0;
}
