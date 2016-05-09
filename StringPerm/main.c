#include <stdio.h>
#include <stdlib.h>
#include<string.h>
    char s[200],tmp;
    int i,len;
    void swap(int a,int b)
    {
        char tmp=s[a];
        s[a]=s[b];
        s[b]=tmp;
    }
void perm(int i)
{
    int j;
    if(i==len-1)
    {
        printf("%s\n",s);
        return;
    }
    for(j=i;j<len;j++)
    {
        swap(i,j);
        perm(i+1);
        swap(i,j);
    }
}
int main()
{
    printf("Hello world!\n");
 scanf("%s",s);
 len=strlen(s);
 perm(0);
    return 0;
}
