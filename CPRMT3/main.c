#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int x[26],y[26];
char a[1001],b[1001];
int inline min(int a,int b){if(a>b)return b;else return a;}
int main()
{
    int i=0,c=0;
    scanf("%d",&c);
    printf("Hello world!\n");
 while(c--){
        scanf("%s %s",a,b);
    while(a[i]){
    x[a[i++]-98]++;
    printf("x[%d]=\n",x[a[i++]-98]);
    }
    i=0;
    while(b[i])
    y[b[i++]-98]++;
    i=0;
    while(i<26)
    {if(x[i]=min(x[i],y[i]))
        printf("%c",x[i]);
      i++;
    }
    printf("\n");
 }
    return 0;
}
