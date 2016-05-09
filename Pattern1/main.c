#include <stdio.h>
#include <stdlib.h>
void printSpace(int n)
{
        if(n/10)
            printf("  ");
            else
            printf(" ");
}
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    k=2*(n-1)-1;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
            printSpace(n);
        for(j=0;j<(2*i+1);j++){
            if(j==0||j==(2*i))
            printf("%d",i+1);
            else
            printSpace(n);
            }
            printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=i;j++)
        {
        printSpace(n);
        }
        for(j=0;j<k;j++)
        {
            if(j==0||j==k-1)
                printf("%d",(n-i-1));
                else
                printSpace(n);
        }
        k-=2;
        printf("\n");
    }
    return 0;
}
