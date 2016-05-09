#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000
int main()
{
    char x[MAX],y[MAX];
    long long int t,i,len,flag=1;
    scanf("%lld",&t);
    while(t--){
    scanf("%s %s",x,y);
    len=strlen(x);
    for(i=0;i<len;i++)
    {
        if(((x[i]<123)&&(x[i]>96))&&((y[i]<123)&&(y[i]>96)))
                if(x[i]!=y[i])
                {
                 flag=0;
                 break;
                }
    }
    if(flag==0)
        printf("NO\n");
    else
        printf("YES\n");
    }
    return 0;
}
