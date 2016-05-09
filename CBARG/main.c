#include <stdio.h>
#include <stdlib.h>
int main()
{
long long int mem_alottd,t,n,*a,i;
scanf("%lld",&t);
while(t--)
{
    scanf("%lld",&n);
    a=(long long int *)malloc(n*sizeof(long long int));
    scanf("%lld",a);
            mem_alottd=*a;
    for(i=1;i<n;i++)
    {
            scanf("%lld",a+i);
        if(*(a+i)>=*(a+i-1))
        {
         mem_alottd+=*(a+i)-*(a+i-1);
        }
    }
    printf("%lld\n",mem_alottd);
    mem_alottd=0;
}
 return 0;
}
