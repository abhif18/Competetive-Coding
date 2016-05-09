#include <stdlib.h>
#include <stdio.h>
#define MAX 100000
using namespace std;

int main()
{
     long int count=0,t,n,n_sq,i,j,x[MAX]={0},y[MAX]={0},m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n_sq=n*n;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++){
            scanf("%lld",&m);
        x[m]=i;
        y[m]=j;
            }
            for(i=1;i<n_sq;i++)
                count+=(abs(x[i+1]-x[i]))+(abs(y[i+1]-y[i]));

            printf("%lld\n",count);
            count=0;
    }
    return 0;
}
