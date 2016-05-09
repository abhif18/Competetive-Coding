#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
int main()
{
    long int count=0,t,n,n_sq,i,j,m;
    long int *x,*y;
    x=(int*)malloc(1000000*sizeof(long int));
    y=(int*)malloc(1000000*sizeof(long int));
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        n_sq=n*n;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++){
            scanf("%ld",&m);
        *(x+m)=i;
        *(y+m)=j;
            }
            for(i=1;i<n_sq;i++)
                count+=(abs(*(x+i+1)-*(x+i)))+(abs(*(y+i+1)-*(y+i)));

            printf("%ld\n",count);
            count=0;
    }
    return 0;
}
