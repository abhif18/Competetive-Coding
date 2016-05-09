#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Given a string like gggggaaannnnnnnwwww
o/p:n7g4w4a3
‘g’ and ‘w’ has same frequency number but have to print in alphabetical order*/

int main()
{
    printf("Hello world!\n");
    char s[200] ,map2[26]={0};
        int map[26]={0},i=0,j,key,key2,len;
    for(i=0;i<26;i++)
        map2[i]=97+i;

    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    map[s[i]-97]++;
    for(i=0;i<26;i++)
    printf("%c   %d\n",map2[i],map[i]);
    for(i=0;i<26;i++)
    {
        key=map[i];
        key2=map2[i];
        j=i-1;
        while((j>=0)&&(map[j]<key))
        {
            map[j+1]=map[j];
            map2[j+1]=map2[j];
            j--;
        }
    map[j+1]=key;
    map2[j+1]=key2;
    }
      for(i=0;i<26;i++)
    printf("%d\n",map[i]);
     for(i=0;i<26;i++)
    printf("%c\n",map2[i]);
    for(i=0;i<26;i++)
        if(map[i])
        printf("%c %d\n",map2[i],map[i]);
    return 0;
}
