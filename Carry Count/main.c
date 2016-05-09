#include <stdio.h>

int main()
{
    long long int n1,n2,c=0,i,count=0,t,tmp;
    /*scanf("%lld",&t);
    while(t--){
    scanf("%lld %lld",&n1,&n2);
    while(n1>0&&n2>0)
    {
       // printf("n1= %lld\tn2=%lld\n",n1,n2);
    	tmp=(n1%10)+(n2%10)+c;
    	//printf("tmp=\t%lld\n",tmp);
    	if(tmp>9){
    	c=1;
    	count++;
    	}
    	else
    	c=0;
    	n1/=10;
    	n2/=10;
    }
    while(n1)
    {
       // printf("n1= %lld\n",n1);
    	if((n1%10)+c>9)
    	{
    		c=1;
    	count++;
    	}
    	n1/=10;
    }
      while(n2)
    {
        // printf("n2= %lld\n",n2);
    	if((n2%10)+c>9)
    	{
    		c=1;
    	count++;
    	}
    	n2/=10;
    }
    if(count>1)
    printf("%lld carry operations\n",count);
    else if(count==0)
    printf("No carry operation\n");
    else if(count==1)
    printf("%lld carry operation\n",count);
    count=0;
    }*/
    n1=26;
    n2=3;
    printf("%d",(n1|n2));
    return 0;
}
