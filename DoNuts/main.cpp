#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    long long int n,n2,t,l,r,count=0;
    long long int* a=(long long int*)malloc(1000000*sizeof(long long int));
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n2=n;
        for(l=0;l<n;l++)
            scanf("%lld",(a+l));
            sort(a,a+n);
            l=0;r=n-1;
            while(l<r)
            {
                while((*(a+l))&&(n2>1))
                {
                    r=r-1;
                    *(a+r)+=((*(a+r+1))+1);
                    if(*(a+l)>1)
                        n2--;
                    else
                        n2-=2;
                    (*(a+l))--;
                    count++;
                }
                l++;
            }
            printf("%lld",count);
            count=0;
    }
    return 0;
}
