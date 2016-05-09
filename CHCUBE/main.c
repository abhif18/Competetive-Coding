#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct color{
char c[7];
};
struct  color colour[6];
int compare(long int i,long int j)
{
   return strcmp(colour[i].c,colour[j].c);
}
int main()
{
    long int i,t,count =0,j;
    scanf("%ld",&t);
    while(t--)
    {
        for(i=0;i<6;i++)
        scanf("%s",colour[i].c);
        count =0;
        for(i=0;i<6&&count<3;i++)
        {
            count =0;
            for(j=0;j<6&&count<3;j++)
            {
               // if(j!=(i+1))
                //{
                    //printf("Comparing %d , %d\n",i,j);
                         if(compare(i,j)==0){
                       // printf("Count++\n");
                        count++;
                        i=j;
                         }
                //}
            }
        }
               if(count>=3)
        {
            printf("YES\n");
            continue;
        }
        else
            printf("NO\n");
        }
    return 0;
}
