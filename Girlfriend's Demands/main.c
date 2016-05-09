#include <stdio.h>
#include<string.h>
#define MAX 100000
int main()
{
    char s[MAX];
    long long int a,b,t,i,len;
    scanf("%s",s);
    scanf("%lld",&t);
    len=strlen(s);
    while(t--)
    {
    	scanf("%lld %lld",&a,&b);
    	a%=t;
    	b%=t;
    	if(s[a-1]==s[b-1])
    	printf("Yes\n");
    	else
    	printf("No\n");
    }
    return 0;
}
