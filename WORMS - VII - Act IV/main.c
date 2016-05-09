#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[1000]={0},a[1000]={0};
/*void divideBy7()
{

}*/
void subtract()
{
    int i,l1=strlen(a);
    for(i=0;i<l1-1;i++)
    {
        if(s[i]<a[i])
        {
            s[i+1]--;
            s[i]=s[i]+10-a[i];
        }
        else
        {
            s[i]=s[i]-a[i];
            i++;
        }
    }
}
int main()
{
    int l,i;
    printf("Hello world!\n");
    scanf("%s %s",s,a);
    l=strlen(s);
    subtract();
    for(i=l-1;i>=0;i--)
    printf("%c",s[i]);
    return 0;
}
