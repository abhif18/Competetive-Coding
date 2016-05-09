#include <stdio.h>
#include <stdlib.h>
//Using Hash Maps
//Not for Negative nos in array
//Optimize it for above Point
#define MAX 10000
int main()
{
    int map[MAX]={0},n[MAX];
    int sum,tmp,len,i;
    printf("Enter no of Elements\n");
    scanf("%d",&len);
    printf("Enter Elements\n");
    for(i=0;i<len;i++)
        scanf("%d",(n+i));
    printf("Enter the Required Sum");
    scanf("%d",&sum);
    for(i=0;i<len;i++)
      {
          tmp=sum-n[i];
          if((map[tmp]==1)&&tmp>=0)
        printf("pair is\n%d\t%d",n[i],tmp);
    map[n[i]]=1;
      }
    return 0;
}
