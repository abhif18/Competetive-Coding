#include <stdio.h>
#include <stdlib.h>
long long int top=-1;
char a[20000],s[20000];
void push(int key)
{
        a[++top]=key;
}
void pop()
{
    top--;
    return a[top+1];
}
int peek()
{
    return a[top];
}
int isEmpty()
{
    if(top==-1)
    return 1;
    else
        return 0;
}
int main()
{
    long long int t,i=1,len,deletions=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s);
        len=strlen(s);
        push(s[0]);
        for(i=1;i<len;i++)
        {
            if(abs(s[i]-peek())==1)
                pop();
            else
                push(s[i]);
        }
        while(!isEmpty())
        {
            deletions++;
            pop();
        }
        printf("%lld\n",deletions);
        deletions=0;
    }
    return 0;
}
