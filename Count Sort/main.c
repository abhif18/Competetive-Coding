#include <stdio.h>
#include <stdlib.h>
#define RANGE 1000000
long int count[RANGE+1]={0},*output,*a,len,i;
void countSort()
{
    output=(long int *)malloc(len*sizeof(long int));
    for(i=0;i<len;i++)
        count[*(a+i)]++;
        for(i=1;i<=RANGE;i++)
            count[i]+=count[i-1];
        for(i=0;i<len;i++)
        {
            *(output+(count[(*(a+i))]-1))=*(a+i);
            count[*(a+i)]--;
        }
        display(output);
}
void display(long int *p)
{
    for(i=0;i<len;i++)
        printf("%ld\n",*(p+i));
}
int main()
{
    scanf("%d",&len);
    a=(long int *)malloc(len*sizeof(long int));
    for(i=0;i<len;i++)
        scanf("%d",(a+i));
    countSort();
    return 0;
}
