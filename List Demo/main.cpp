#include <iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    vector<pair<int ,char> > li;
    vector<pair<int , char> > :: iterator itr;
    li.push_back(pair<int ,char>(75,'A'));
    li.push_back(pair<int ,char>(1005,'B'));
    itr=li.begin();
    for(int j=0;j<2;j++)
        cout << li[j].first << "\t" << li[j].second << endl;
    cout << endl ;
    return 0;
}
