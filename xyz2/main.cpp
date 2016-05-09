#include <iostream>
#include <utility>
#include <map>
#include <stdio.h>
#define MAX 100000
typedef long long int myint;
using namespace std;
int main()
{
    long long int n,m,t1,i,b[MAX],t;
   map <myint,myint>a;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&t1);
           a.insert(pair<myint,myint>(t1,1));
        }
                for(i=0;i<m;i++)
            scanf("%lld",b[i]);
        for(i=0;i<m;i++)
        {
            a.find(b[i])
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
