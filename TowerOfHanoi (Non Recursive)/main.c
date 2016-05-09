#include<limit.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20;
x[0]=0;y[0]=0;z[0]=0;
int isEmpty(int a[MAX])
{
    if(a[0]==0)
        return 1;
    else
        return 0;
}
int isFull(int a[MAX])
{
    if(a[0]==MAX-1)
        return 1;
    else
        return 0;
}
void push(int a[MAX],int disk_ID,char tower_ID)
{
int top;
if(isFull(a))
    return INT_MAX;
top=a[0];
top++;
a[top]=disk_ID;
}
int pop(int a[MAX])
{
int t;
if(isEmpty(a))
    return INT_MAX;
t=a[a[0]];
a[0]--;
return t;
}
int main()
{
    int i,id,n,tmp;
    printf("Hello world!\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        tmp=pop(x);
        push(z,tmp);
        printf("Move Disk %d from Tower %c to %c\n",tmp,'A','C');
    }
        for(i=1;i<=n;i++)
    {
        tmp=pop(z);
        push(y,tmp);
        printf("Move Disk %d from Tower %c to %c\n",tmp,'C','B');
    }
       tmp=pop(x);
       push(z,tmp);
       printf("Move Disk %d from Tower %c to %c\n",tmp,'A','C');
    for(i=1;i<=n;i++)
    {
        tmp=pop(x);
        push(z,tmp);
        printf("Move Disk %d from Tower %c to %c\n",tmp,'A','C');
    }
        for(i=1;i<=n;i++)
    {
        tmp=pop(x);
        push(z,tmp);
        printf("Move Disk %d from Tower %c to %c\n",tmp,'A','C');
    }
    return 0;
}
