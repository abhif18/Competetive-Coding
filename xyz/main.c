#include <stdio.h>
#include <stdlib.h>
int find(long long int key)
{

}
int main()
{
    long int i,t,n,m,a[100000],b[100000],map[110000];
    memset(map,0,100000);
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&n,&m);
        for(i=0;i<n;i++){
            scanf("%ld",(a+i));
             map[a[i]]++;
        }
        for(i=0;i<m;i++)
            scanf("%ld",(b+i));

        for(i=0;i<m;i++)
        {
            if(find(b[i]))
                printf("YES\n");
            else
                printf("NO\n");
        }
       /* for(i=0;i<m;i++)
        {
                if(map[b[i]]){
                    printf("YES\n");
                    map[b[i]]--;
                }
                else
                    printf("NO\n")   ;
        }*/
    }
    return 0;
}
