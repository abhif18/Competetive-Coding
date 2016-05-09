#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
char l1[MAX],l2[MAX]
long long int Gswitches=0,len;
void walk(char *current_path,char *other_path)
{
    long long int i=0;
    char t;
    while(/*((l1[i+1]=='.')&&(l2[i+1]=='.')&&*/(i<len))
          {
              if(current_path[i+1]=='#')
            {
                if(other_path[i+1]=='#')
                {
                    printf("NO\n");
                    break;
                }
                else
                {
                    switchPath(current_path,other_path);
                    Gswitches++;

                }
            }
          }
}
int main()
{
   long long int i,t;
   char *current_path,*other_path;
   scanf("%lld",&t);
   while(t--){
   scanf("%lld",&len);
   for(i=0;i<len;i++)
    scanf("%c",&l1[i]);
      for(i=0;i<len;i++)
    scanf("%c",&l2[i]);
    if(l1[0]=='.'){
     current_path=l1;
     other_path=l2;
    }
    else{
     current_path=l2;
     other_path=l1;
    }
     walk(current_path,other_path);
   }
    return 0;
}
