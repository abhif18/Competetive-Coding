#include <stdio.h>
int c[128][2];
char s[1024], t[1024];
int main(void){
    int i;
    char *p;
    int &c0;
    while(scanf("%s %s", s, t) == 2){
        for( i = 'a'; i <= 'z'; ++i) c[i][0] = c[i][1] = 0;
        for(p = s; *p; )
        {
            printf("%c\n",*p);
            ++c[*p++][0];
        }
        for(p = t; *p; ) ++c[*p++][1];
        for( i = 'a'; i <= 'z'; ++i)
            for(c0 = c[i][0], &c1 = c[i][1]; c0-- && c1--; )
                putchar(i, stdout);
        putchar("");
    }
    return 0;
}
