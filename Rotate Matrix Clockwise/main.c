#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m[10][10],r_start=0,r_end,c_start=0,c_end,i,j,tmp,r_current,c_current;
   printf("Enter Matrix Size\n");
   scanf("%d%d",&r_end,&c_end);
   for(i=0;i<r_end;i++)
    for(j=0;j<c_end;j++)
    scanf("%d",&m[i][j]);

   while((r_start<=r_end)&&(c_start<=c_end))
   {
       for(i=c_start;i<c_end-1;i++)
       {
           r_current=r_start;
           tmp=m[r_current][i+1];
           m[r_current][i+1]=m[r_current][i];
       }
       for(i=r_start;i<r_end-1;i++)
       {
           c_current=c_end;
           m[i+1][c_current]=tmp;
       }
       for(i=c_start;i<c_end;i++)
       {
           r_current=r_start;
           m[r_current][i+1]=m[r_current][i];
       }
       for(i=c_start;i<c_end;i++)
       {
           r_current=r_start;
           m[r_current][i+1]=m[r_current][i];
       }
   }
    return 0;
}
