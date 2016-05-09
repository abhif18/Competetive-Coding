#include <stdio.h>
#include <stdlib.h>
int n[100],i,len;
int findMajority()
{
    int majIndex=0,count=1;
    for(i=0;i<len;i++)
    {
        if(n[majIndex]==n[i])
            count++;
        else
            count--;
        if(count==0)
        {
            majIndex=i;
            count=1;
        }
    }
    return n[majIndex];
}
int main()
{
    int tmp,len,c=0;
    printf("Hello world!\n");
    scanf("%d",&len);
    for(i=0;i<len;i++)
        scanf("%d",(n+i));
        tmp=findMajority();

        for(i=0;i<len;i++)
         if(n[i]==tmp)
             c++;
         if(c>(len/2))
        printf("Majoirty Element is %d",tmp);
      else
        printf("No Majority Element");
    return 0;
}
