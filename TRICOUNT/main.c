#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,l,i,sum=0,tmp,tmp2,current_level;
    scanf("%lld",&n);
    tmp=n*(n+1)/2;
    l=n;
    current_level=n;
    while(current_level){
            sum+=tmp;
            tmp=tmp-l;
            l=l-1;
     current_level--;
     printf("Current Level %lld : no of upright= %lld\n",current_level+1,tmp);
    }
    l=n;
    current_level=n;
    while(current_level>1&&(tmp-l)>0)
    {
        sum+=tmp-l;
        l+=2;
        current_level--;
    }
    printf("Count= %lld",sum);
    return 0;
}
