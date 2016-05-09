#include <stdio.h>
#include <stdlib.h>
#include<string.h>
    int   len , i, j ,tmp,c=0;
    char s[20];
    void inline swap(char s[20],int a,int b){
    tmp=s[a];
    s[a]=s[b];
    s[b]=tmp;
    }
    void prmt(char s[20],int i)
    {
        if(i==len-1)
        {
            printf("%s\n",s);
            c++;
            return;
        }
        int j=i;
        for(j=i;j<len;j++) //j for navigating through string for swapping
        {
                swap(s, i, j) ;
                prmt(s, i+1);
                swap(s, i, j);  //Swap again to make string back to original, if not done next swap will occur on already swapped string
                 //leading wrong o/p
        }
    }
int main()
{
    scanf("%s",s);
    len=strlen(s);
    prmt(s,0);
    printf("Total Permutations=%d",c);
    return 0;
}
