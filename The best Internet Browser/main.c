#include <stdio.h>
#include <stdlib.h>
int tc,i=4,c=0,len;
char w[201];
int main()
{
    scanf("%d",&tc);
    while (tc--)
    {
            scanf("%s",w);
        while(w[i]!='.')
        switch(w[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            i++;
            break;
        default :
            c++;
            i++;
          break;
        }
        c+=4;
        printf("%d/%d\n",c,strlen(w));
        c=0;
        i=4;
    }
    return 0;
}
