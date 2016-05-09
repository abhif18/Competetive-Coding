#include <stdio.h>
#include <stdlib.h>
int s_odd,s_even,n,a[100],i;
int main()
{
    printf("Hello User Enter Values in the Array Now!\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
     if(a[i]%2==0)
            s_even++;
     else
        s_odd++;
    }
    s_even=(s_even*s_odd);
    printf("\n%d\n",s_even);
    return 0;
}
