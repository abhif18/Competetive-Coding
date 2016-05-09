#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int t,n,*a,count=0,sum=0,i=0,j=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a=(long long int *)malloc(n*sizeof(long long int));
        for(i=0;i<n;i++)
            scanf("%lld",(a+i));
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                sum+=*(a+j);
                if(sum==0)
                    count++;
            }
            sum=0;
        }
        printf("%lld\n",count);
        count=0;
    }
    printf("Hello world!\n");
    return 0;
}
