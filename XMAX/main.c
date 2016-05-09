#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
int main()
{
    long long int n,i,j,x,max,a[MAX];
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
        x=a[i];
        for(j=i+1;j<n;j++)
            x=x^a[j];
        if(max>x)
            max=max;
        else
            max=x;
    }
    printf("%lld",max);
    return 0;
}
