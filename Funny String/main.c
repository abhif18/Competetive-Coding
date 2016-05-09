#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[20000];
    long long int t,i,d1,d2,j,len;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%s",s);
        len=strlen(s);
        i=1;j=len-1;
       while(i<=j)
           {
           d1=abs(s[i]-s[i-1]);
           d2=abs(s[j]-s[j-1]);
           printf("i=%lld      j=%lld\nd1=%lld     d2=%lld\n",i,j,d1,d2);
           if(d1!=d2)
               {
               printf("Not Funny\n");
               break;
           }
           else
               {
               i++;
               j--;
           }
       }
        if(i>=j)
            printf("Funny\n");
    }
    return 0;
}
