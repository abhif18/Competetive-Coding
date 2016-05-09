#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,j,key,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while((j>=0)&&(key<a[j]))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("Hello world!\n");
    return 0;
}
