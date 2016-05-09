#include <iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    vector <int> v;
    vector <int> ::iterator it;
    it=v.begin();
for(int j=0;j<10;j++){
    cout << "Enter" <<endl;
    scanf("%d",&n);
    //cin >> n;
    *it=n;
    it++;
}
    for(it=v.begin(); it !=v.end() ;++it)
        cout << (*it) << "\t";
    cout <<endl ;
    while(!v.empty())
    {
        cout << v.back() << "\t" ;
        v.pop_back();
    }
    return 0;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    vector <int>::iterator it;
    v.push_back(5);
    while(v.back() > 0)
        v.push_back(v.back() - 1);
    for(it = v.begin(); it != v.end();++it)
        cout << *it << ' ';
    cout << endl;
    for(int i = 0;i < v.size();++i)
        cout << v.at(i) << ' ';
    cout << endl;
    while(!v.empty())
    {
        cout << v.back() << ' ';
        v.pop_back();
    }
    cout << endl;
    return 0;
}
*/
