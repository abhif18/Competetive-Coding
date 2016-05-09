#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long  int *a,n,i,j,key;
    scanf("%lld",&n);
    a=(long long int *)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++)
    {
        scanf("%lld",a+i);
        key=*(a+i);
        j=i-1;
        while((j>=0)&&(*(a+j)>key))
        {
            *(a+j+1)=*(a+j);
            j--;
        }
        *(a+j+1)=key;
    }
    for(i=0;i<n;i++)
        printf("%lld\n",*(a+i));
    return 0;
}
